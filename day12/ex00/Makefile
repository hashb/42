# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hashb <hashb@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 21:32:08 by hashb             #+#    #+#              #
#    Updated: 2018/10/04 22:00:27 by hashb            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ./src/display_file.c
DEPS = display_file.o
INCLUDES = ./include

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -I $(INCLUDES)

$(DEPS):
	$(CC) $(CFLAGS) -c $(SRC) -I $(INCLUDES)

clean:
	/bin/rm $(DEPS)

fclean: clean
	/bin/rm $(NAME)

re: fclean all
