# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 18:03:23 by kchenna           #+#    #+#              #
#    Updated: 2018/10/02 21:58:56 by kchenna          ###   ########.fr        #
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

$(NAME): $(OUT)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

ft_putchar.o: $(SRC_DIR)/ft_putchar.c $(INCLUDES)/ft_putchar.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_putchar.c -I $(INCLUDES)

ft_putstr.o: $(SRC_DIR)/ft_putstr.c $(INCLUDES)/ft_putstr.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_putstr.c -I $(INCLUDES)

ft_strcmp.o: $(SRC_DIR)/ft_strcmp.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_strcmp.c -I $(INCLUDES)

ft_strlen.o: $(SRC_DIR)/ft_strlen.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_strlen.c -I $(INCLUDES)

ft_swap.o: $(SRC_DIR)/ft_swap.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/ft_swap.c -I $(INCLUDES)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
