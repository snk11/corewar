# INTRODUCTION

```
There are 2 applications:
- the first is an application wich put a file written in speudo asm code to a binary file.
- the second is a Virtual Machine wich executes the  programs received in argument, and it can tell which programs have won the corewar.
To win the corewar, a contender have to launch a certain fonction knew by the VM, this particular function calls the contender's name  and in addition it have to do it last.

```

# MAKEFILE ASM
```
to make the exe file called asm:
make

to recomplile all:
make re

to clean .o files:
make clean

to clean .o files and exe file:
make fclean
```

# MAKEFILE VM
```
to make the exe file called corewar:
make

to recomplile all:
make re

to clean .o files:
make clean

to clean .o files and exe file:
make fclean
```

# HOW IT WORKS
```
Transform a program written in speudo asm to binary format as:

For example, the command ./asm cristianno.s will give a binary file cristianno.cor

put this binary file in argument of the VM application with the command ./corewar -d 20000 cristianno.cor cristianno.cor
the corewar between the program cristianno vs himself give fortunatly cristianno number 2 as winner, with the output:
Constestant 2, cristianno, has won !



```
