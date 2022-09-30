#!/bin/bash
gcc -Wall -Werror -Wextra -Pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
