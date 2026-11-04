CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $@ $^

.PHONY: all clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all
