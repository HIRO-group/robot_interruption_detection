# Interruption Detection

This repository is responsible for updating the easement factor to slow down or speed up the Sawyer robot.

## Conditions

* Staring: while people keep staring at the robot, it will slow down
* Speech command: 
    * *stop*/*quit*/*exit*: stop the robot immediately
    * *go*/*ahead*/*continue*: make the robot continue its work

## Input Topics

* `/hiro/language/easement`
* `/hiro/lookat_screen`
* `/hiro/lookat_gripper`

## Output Topic

The easement factor will be published to `/hiro/final_easement`.

