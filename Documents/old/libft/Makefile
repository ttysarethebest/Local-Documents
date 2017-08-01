# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awicks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/08 12:56:01 by awicks            #+#    #+#              #
#    Updated: 2017/05/08 14:42:05 by awicks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -Wall -Werror -Werror -I includes/* -c srcs/*
	ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	ranlib libft.a

clean:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

fclean:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	rm -f libft.a

re:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	rm -f libft.a
	gcc -Wall -Werror -Werror -I includes/* -c srcs/*
	ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	ranlib libft.a
