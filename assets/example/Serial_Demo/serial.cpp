/**
 * @brief opencat header
 * @file
 * @author Verse
 * @date 2025.08.01
 * @version 1.0
 **/
#include "serial.hpp"
#include <cassert>

namespace Serial
{
Serial::Serial(string serial_port, speed_t baud_rate, tcflag_t data_bits,
               bool parity)
    : serial_dev{open(serial_port.c_str(), O_RDWR)} // open device
{
    // check device open
    if (this->serial_dev < 0)
    {
        printf("Error %i from open: %s\n", errno, strerror(errno));
    }
    // Read in existing settings, and handle any error
    // NOTE: This is important! POSIX states that the struct passed to
    // tcsetattr() must have been initialized with a call to tcgetattr()
    // overwise behaviour is undefined
    if (tcgetattr(serial_dev, &tty) != 0)
    {
        printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
    }
    // parity bit
    tty.c_cflag &= ~PARENB; // Clear parity bit, disabling parity (most common)
    if (parity)
        tty.c_cflag |= PARENB; // Set parity bit, enabling parity
    // stop bit, default is fine
    tty.c_cflag &= ~CSTOPB; // Clear stop field, only one stop bit used in
                            // communication (most common)
    // data bits
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= data_bits;
    // disable canonical mode
    tty.c_lflag &= ~ICANON;
    // disable software flow control
    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
    // disable special handling of chars
    tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR |
                     ICRNL); // Disable any special handling of received bytes
    // output options
    tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes
                           // (e.g. newline chars)
    tty.c_oflag &=
        ~ONLCR; // Prevent conversion of newline to carriage return/line feed

    // 禁用回显和其他控制字符处理
    tty.c_lflag &= ~(ECHO | ECHONL | ISIG | IEXTEN);

    // Wait for up to 1s (10 deciseconds), returning as soon as any data is
    // received.
    tty.c_cc[VTIME] = 100;
    tty.c_cc[VMIN] = 0;
    // Set in/out baud rate
    cfsetspeed(&tty, baud_rate);
    // Save tty settings, also checking for error
    if (tcsetattr(serial_dev, TCSANOW, &tty) != 0)
    {
        printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
    }
}

int Serial::send(const vector<uint8_t> &msg)
{
    return write(serial_dev, &msg[0], msg.size());
}


std::vector<uint8_t> Serial::receive(size_t bytes) 
{
    assert(bytes <= sizeof(read_buf));

    ssize_t n = read(serial_dev, read_buf, bytes);
    std::cout << "Read " << n << " bytes from serial." << std::endl;
    if (n > 0) {
        return std::vector<uint8_t>(read_buf, read_buf + n);
    } else if (n == 0) {
        return {}; // 没有数据
    } else {
        perror("read error"); // 出错
        return {};
    }
    // assert(bytes <= sizeof(read_buf));
    // memset(read_buf, 0, sizeof(read_buf));  // 清空缓冲区
    // read(serial_dev, read_buf, bytes);
    // return vector<uint8_t>{read_buf, read_buf + bytes};
}

std::string Serial::readline()
{
    std::string res;
    do
    {
        read_buf[0] = '\0';
        read(serial_dev, read_buf, 1);
        res.push_back((char)read_buf[0]);
    } while (res.back() != '\n');
    // remove newline chars
    while (res.back() == '\r' || res.back() == '\n')
        res.pop_back();
    return res;
}

} // namespace Serial
