NAME = push_swap

SRC= ft_printf.c push_swap.c ft_atoi.c ft_split.c ft_strlen.c fill_sort_stack.c

OBJ= $(SRC:.c=.o)

CC = cc

CFLAGS=  -Wall -Wextra -Werror 

$(RM) = rm -f 
  
all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all