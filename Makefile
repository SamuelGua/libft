NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
SRC = $(wildcard *.c)
OBJ	= $(SRC:.c=.o)



all : $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -o $@  -c $<

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY : all clean fclean re

