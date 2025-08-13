from setuptools import find_packages
from setuptools import setup

setup(
    name='opencat_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('opencat_msgs', 'opencat_msgs.*')),
)
