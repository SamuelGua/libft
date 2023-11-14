NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
SRC = $(wildcard *.c)
OBJ	= $(SRC:.c=.o)



all : $(NAME)

bonus : $(NAME)

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
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY : all so clean fclean re