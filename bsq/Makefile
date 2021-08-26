# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 17:20:45 by sserwyn           #+#    #+#              #
#    Updated: 2021/08/25 15:42:16 by sserwyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= bsq
SRC		= main.c \
			ft_realloc.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_putstr_error.c \
			is_ascii.c \
			first_line.c \
			map_checker.c \
			read_console_main.c \
			utils.c \
			read_file_main.c \
			solve_main.c \
			get_map_empty_obstacle_full.c \
			solve_print_result.c \
			cleans.c \
			data_handle.c

OBJ		= $(SRC:.c=.o)
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all