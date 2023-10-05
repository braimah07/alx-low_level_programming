#!/bin/bash

# Compile each .c file to a .o object file
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -c "$file"
done

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up the .o object files
rm -f *.o
