# Libft - 42 Project

**Libft** is a custom C library that replicates key functions from the standard C library. It includes implementations of various functions (for example, `strlen`, `strcpy`, `memset`, and `malloc`), focusing on string manipulation, memory management, and linked lists. This project is designed to build a deeper understanding of how these fundamental functions work behind the scenes. 

### Functions from `<ctype.h>`
- `ft_isalpha` - checks for an alphabetic character.
- `ft_isdigit` - checks for a digit (0 through 9).
- `ft_isalnum` - checks for an alphanumeric character.
- `ft_isascii` - checks whether `c` fits into the ASCII character set.
- `ft_isprint` - checks for any printable character.
- `ft_toupper` - converts a char to uppercase.
- `ft_tolower` - converts a char to lowercase.

### Functions from `<string.h>`
- `ft_memset` - fill memory with a constant byte.
- `ft_strlen` - calculate the length of a string.
- `ft_bzero` - zero a byte string.
- `ft_memcpy` - copy memory area.
- `ft_memmove` - copy memory area.
- `ft_strlcpy` - copy string to an specific size.
- `ft_strlcat` - concatenate string to an specific size.
- `ft_strchr` - locate character in string.
- `ft_strrchr` - locate character in string.
- `ft_strncmp` - compare two strings.
- `ft_memchr` - scan memory for a character.
- `ft_memcmp` - compare memory areas.
- `ft_strnstr` - locate a substring in a string.
- `ft_strdup` - creates a duplicate for the string passed as parameter.

### Functions from `<stdlib.h>`
- `ft_atoi` - convert a string to an integer.
- `ft_calloc` - allocates memory and sets its bytes' values to 0.

### Non-standard functions
- `ft_substr` - returns a substring from a string.
- `ft_strjoin` - concatenates two strings.
- `ft_strtrim` - trims the beginning and end of string with specific set of chars.
- `ft_split` - splits a string using a char as parameter.
- `ft_itoa` - converts a number into a string.
- `ft_strmapi` - applies a function to each character of a string.
- `ft_striteri` - applies a function to each character of a string.
- `ft_putchar_fd` - output a char to a file descriptor.
- `ft_putstr_fd` - output a string to a file descriptor.
- `ft_putendl_fd` - output a string to a file descriptor, followed by a new line.
- `ft_putnbr_fd` - output a number to a file descriptor.

### Linked list functions
- `ft_lstnew` - creates a new list element.
- `ft_lstadd_front` - adds an element at the beginning of a list.
- `ft_lstsize` - counts the number of elements in a list.
- `ft_lstlast` - returns the last element of the list.
- `ft_lstadd_back` - adds an element at the end of a list.
- `ft_lstclear` - deletes and free list.
- `ft_lstiter` - applies a function to each element of a list.
- `ft_lstmap` - applies a function to each element of a list.
