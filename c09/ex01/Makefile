# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dground <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 17:10:53 by dground           #+#    #+#              #
#    Updated: 2021/08/15 18:55:39 by dground          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRCFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJFILES = $(SRC_FILES:.c=.o)
DIR = ./srcs/
OBJ = $(addprefix $(DIR), $(OBJFILES))
SRC = $(addprefix $(DIR), $(SRCFILES))

all: obj $(NAME)

obj: $(SRC)

$(DIR)%.o: $(DIR)%.c
	$(CC) -I ./includes $(CFLAGS) $< -o $@ 

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY: all clean fclean re

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all


	
