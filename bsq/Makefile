NAME := bsq
SRCS := srcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

all: $(NAME)

$NAME:
        $(CC) $(CFLAGS) -c $(SRCS)/main.c -o $(SRCS)/main.o
        ar rcs $(NAME) $(SRCS)/main.o
clean:
        rm -f $(SRCS)/main.o

fclean: clean
        rm -f$(NAME)

re: fclean all