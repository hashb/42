# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 18:03:23 by kchenna           #+#    #+#              #
#    Updated: 2018/10/02 21:10:08 by kchenna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = ./includes
SRC_DIR = ./srcs
OBJS = ./objs
SRCS = $(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strcmp.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_swap.c

OUT = $(OBJS)/ft_putchar.o \
		$(OBJS)/ft_putstr.o \
		$(OBJS)/ft_strcmp.o \
		$(OBJS)/ft_strlen.o \
		$(OBJS)/ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

.PHONY: clean
clean:
	/bin/rm -f $(OUT)

fclean:
	clean
	/bin/rm -f $(NAME)

re:
	fclean
	all