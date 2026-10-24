*This activity has been created as part of the 42 curriculum by syaseen*

# Libft

# Description
Libft is custom 42 common core library. This project aims to help the student understand how these functions work by 
implementing them theirself and learning to use them effectively. They will create their own library, which will be 
valuable for their future C school assignments.

## Library Overview
This library is composed of three main parts:
*PART1: Libc functions*
*PART2: Additional functions*
*PART3: Linked list*

# Instructions

## Installation Method
*git clone*
*cd *

## Compilation
The library is compiled into ('libft.a') using 'cc' with the flags '-Wall -Wextra -Werror'.

Makefile rules:
- 'make' or 'make all': compiles all src files and puts them in 'libft.a'.
- 'make clean' : removes the compiled object files.
- 'make fclean': removes the object files and 'libft.a'.
- 'make re': cleans everything and recompiles the library.

# Library Description

**Part 1 - Libc Functions**

*Re-implementations of standard C library functions adhering to system man pages:*

Character Checks & Conversions: *ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower.*

String Operations: *ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strlcpy, ft_strlcat.*

Memory Management: *ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp.*

Allocation & Conversion: *ft_atoi, ft_calloc, ft_strdup.*

**Part 2 - Additional Functions**

*General-purpose utility functions not found in libc or implemented in an altered form:*

String Manipulation: *ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri.*

File Descriptor Output: *ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.*

**Part 3 - Linked List Functions**

*Functions built to create and manage dynamic single-linked list structures (t_list):*

*ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap*

# Resources

## References 
- 'GeeksforGeeks'
- 'Gitlab'

## AI Usage
*AI was used for explaining the Makefile & Readme*
=======
# libft
My implementation of the **libft** project from 42 School, recreating standard C library functions to strengthen my understanding of C programming, pointers, strings, memory management, and linked lists.