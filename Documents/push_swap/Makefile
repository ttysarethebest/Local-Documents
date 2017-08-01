# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awicks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 19:31:07 by awicks            #+#    #+#              #
#    Updated: 2017/06/10 19:35:58 by awicks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

REMOVE = /bin/rm -f
CC = gcc
FLAGS = -c -Wall -Wextra -Werror
SOURCES = *.c
OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(SOURCES)
	$(CC) $(FLAGS) $(SOURCES)

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
