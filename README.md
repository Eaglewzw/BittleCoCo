# BittleCoCo

# Skills Reference

## Posture Skills
| Abbreviation | Skill Name                  |
|--------------|-----------------------------|
| balance      | stand up neutral            |
| buttUp       | butt up                     |
| calib        | calibration pose            |
| dropped      | dropped by back legs        |
| lifted       | lifted by neck              |
| ind          | landing pose                |
| rest         | rest                        |
| sit          | sit                         |
| str          | stretch                     |
| up           | stand up neutral (= balance)|
| zero         | all joint at 0 degrees      |

## Gait Skills
| Abbreviation | Skill Name          |
|--------------|---------------------|
| bdf          | bound forward       |
| bk           | backward            |
| bkL          | backward Left       |
| crF          | crawl Forward       |
| crL          | crawl Left          |
| gpF          | gap Forward         |
| gpL          | gap Left            |
| hhw          | halloween gait      |
| jpF          | jump Forward        |
| phF          | push Forward        |
| phL          | push Left           |
| trF          | trot Forward        |
| trL          | trot Left           |
| vtF          | step at origin      |
| vtL          | sping left          |
| wkF          | walk Forward        |
| wkL          | walk Left           |

## Behavior Skills
| Abbreviation | Skill Name                  |
|--------------|-----------------------------|
| ang          | angry                       |
| bf           | backflip                    |
| bx           | boxing                      |
| chr          | cheers                      |
| ck           | check                       |
| cmh          | come here                   |
| dg           | dig                         |
| ff           | front flip                  |
| fiv          | high five                   |
| gdb          | good boy                    |
| hds          | handstand                   |
| hg           | hug                         |
| hi           | hi                          |
| hsk          | hand shake                  |
| hu           | hands up                    |
| jmp          | jump                        |
| kc           | kick                        |
| lpow         | leap over                   |
| mw           | moon walk                   |
| nd           | nod                         |
| pd           | play dead                   |
| pee          | pee                         |
| pu           | push ups                    |
| pu1          | push ups with on hand       |
| rc           | recover                     |
| rl           | roll                        |
| scrh         | scratch                     |
| snf          | sniff                       |
| tbl          | be table                    |
| ts           | test                        |
| wh           | wave head                   |
| zz           | all joint at 0 degrees      |

## Direction Suffixes
When calling a skill, you may specify its direction by adding a suffix:
- `-L`: left
- `-R`: right (mirrored from left)
- `-X`: random direction

## server
```bash
root@ubuntu:~/ros2_ws# ros2 interface show opencat_msgs/srv/BaseTask 
uint8 cmd
int16[] arguments
float32 delay
---
bool res
```

## push

```bash
git add .
git commit -m "first commit"
git push -u origin main
```

## 效果图
![效果图片1](./assets/整体效果.jpg "BittleCoCo")

