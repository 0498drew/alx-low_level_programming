# C - Dynamic libraries
## Project
### 0. Create the dynamic library libdynamic.so containing all the functions listed
### 1. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
### 2. Create a dynamic library that contains C functions that can be called from Python
### 3. Running a program from random numbers 9, 8, 10, 24, 75 + 9. that could win a jackpot .
##### You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
### The system is an Linux Ubuntu 16.04
###    The server has internet access
##### Our mole will be only able to run two commands from a shell script, without being detected by MSS
##### Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, it would be detected by MSS), and have a maximum of two commands
##### Our mole has only the authorization to upload one file on the server. It will be your shell script
####  Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
#### Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
#### MSS will use the same terminal and session than our mole
#### Before running the gm program, MSS always check the content of the directory
#### MSS always exit after running the program gm
#### TL;DR; This is what is going to happen

