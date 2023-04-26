NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard ./src/ft_*.c)

OBJ = $(SRC:.c = .o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)

re: fclean all

clean : 
	rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

.PHONY : all bonus clean fclean re