#!/bin/bash

gcc -c -Wall -Werror -Wextra *.c
ar rc libft.a *.o
ranlib libft.a

