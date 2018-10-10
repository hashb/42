# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 18:03:23 by kchenna           #+#    #+#              #
#    Updated: 2018/10/02 22:02:52 by kchenna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./includes
SRC_DIR = ./srcs
SRCS = $(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strcmp.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_swap.c

OUT = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
