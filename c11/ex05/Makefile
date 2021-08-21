NAME = do-op
CC = gcc
SRCS = main.c ft_output.c ft_operator_functions.c ft_do_op.c ft_calculation.c ft_atoi.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@	

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re