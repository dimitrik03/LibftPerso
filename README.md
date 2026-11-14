*This activity has been created as part of the 42 curriculum by dgammal.*

# Libft

## Description

Libft is the first project of the 42 Common Core. This project aims to re-code a set of functions from the C standard librairy, plus additional utility functions and to gather them into a static librairy.

### Part 1 : Libc Functions

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigt`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strlen`, `ft_atoi` |
| Memory | `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_bzero` |
| Allocation | `ft_calloc`, `ft_strdup` |

### Part 2 : Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a new string from `s`, starting at `start` of at most `len` characters. |
| `ft_strjoin` | Returns a new string made of `s1` followed by `s2`. |
|  `ft_strtrim` | Returns a copy of `s1` with the characters of `set` removed from the beginning and the end. |
| `ft_split` | Splits a string on a delimiter and returns a `NULL`-terminated array of strings. |
| `ft_itoa` | Converts an int into a newly allocated string. Integer to ASCII.
| `ft_strmapi` | Applies a function to each character of a string and returns the result as a new string. |
| `ft_striteri` | Applies a function to each character, in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor  |
| `ft_putnbr_fd` | Writes a integer to a file descriptor. |

### Part 3 : Linked list

All list functions use the following structure, declared in `libft.h`
```C
typedef struct s_list
{
void			*content;
struct s_list	*next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | Allocates a new node at the beginning of a list. |
| `ft_lstsize` | Returns the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Add a node at the end of a list. |
| `ft_lstdelone` | Frees the content of a node with `del`, then frees the node. |
| `ft_lstclear` | Deletes and frees every node of a list, then set the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to the content of every node. |


## Instructions

### Requirements

+ Use a C compiler (gcc, cc, clang)
+ `make`

The code is compiled with `-Wall -Wextra -Werror`

### Compilation

```sh
make 		#builds libft.a
make clean 	#removes the object files
make fclean #removes the object files and libft.a
make re 	#fclean, then rebuils everything
```

### Usage

Include the header in your code and link the librairy at compilation.
```C
#include "libft.h"
```

## Resources

### Documentation

+ [Makefile](https://dev.to/ashcript/comprendre-le-makefile-exemple-avec-le-langage-c-47n9)
+ [Makefile](https://www.stephane-robert.info/docs/developper/autres-outils/build/makefile/)
+ the `man` page of the original function
+ [Table ASCII](https://www.ascii-code.com/fr)
+ [Code2quoi.com](https://www.codequoi.com/manipuler-un-fichier-a-laide-de-son-descripteur-en-c/)
+ Tripouille Tester

### Use of AI

AI tool such as Claude was used mainly to explain and clarify concepts.
All the code in this repository was written, debugged and tested by myslef.
