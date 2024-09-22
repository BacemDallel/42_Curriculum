# libft

## Overview

`libft` is a project that forms part of the curriculum at 42. It consists of a collection of standard C library functions, along with some custom implementations that enhance the functionality of C programming. This library serves as a foundation for future projects and allows for better understanding of memory management, linked lists, and other core concepts in C.

## Features

- Implementations of standard library functions such as `memset`, `memcpy`, `strchr`, etc.
- Creation and manipulation of linked lists through functions like `ft_lstnew`, `ft_lstadd_back`, and `ft_lstsize`.
- Utility functions for string handling and memory management.
- A custom `makefile` for easy compilation.

## Installation

To use `libft`, clone this repository to your local machine:

```bash
git clone https://github.com/yourusername/libft.git
```

Navigate to the project directory:

```bash
cd libft
```

Compile the library using the provided makefile:

```bash
make
```

## Usage

You can include the library in your projects by linking it during compilation. For example:

```bash
cc -o my_program my_program.c -L. -libft
```

## Functions

The library includes the following functions:

- String manipulation functions: `ft_strlen`, `ft_strcpy`, `ft_strcat`, etc.
- Memory management functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, etc.
- Character classification functions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.
- Linked list functions: `ft_lstnew`, `ft_lstadd_back`, `ft_lstiter`, etc.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

This project is part of the 42 school curriculum. Special thanks to the instructors and peers who provided support and guidance throughout the development process.
