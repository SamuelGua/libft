NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = $(wildcard *.c)
OBJ	= $(SRC:.c=.o)



all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@  -c $<

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

