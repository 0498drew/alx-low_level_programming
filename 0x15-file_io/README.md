
#0x15. C - File I/O
0x15. C - File I/O
C
Syscall
 By Julien Barbier
 Weight: 1
 Ongoing project - started Jul 25, 2022, must end by Jul 26, 2022 - you're done with 0% of tasks.
 Checker was released at Jul 25, 2022 12:00 PM
 An auto review will be launched at the deadline
Resources
Read or watch:

File descriptors
C Programming in Linux Tutorial #024 - open() read() write() Functions
man or help:

open
close
read
write
dprintf
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Look for the right source of information online
How to crreat! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Tread lightly, she is near
mandatory
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0



