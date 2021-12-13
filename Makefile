# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 17:47:27 by olakhdar          #+#    #+#              #
#    Updated: 2021/11/28 14:28:14 by olakhdar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_itoa.c ft_putnbru.c \
ft_hexa.c ft_phexa.c \

OFILES = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(FILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
