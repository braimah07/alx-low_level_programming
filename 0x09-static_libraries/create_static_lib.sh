#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======

gcc -c *.c
ar -rcs liball.a *.o
>>>>>>> b04ff48 (My commit)
