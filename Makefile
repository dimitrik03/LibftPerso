cc = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
