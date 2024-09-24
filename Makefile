# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Bacem Dallel                                  +#+  +:+       +#+       #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24                                   ###   ########.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
FLAGS		= -Wall -Wextra -Werror

# Mandatory source files
SRCS		= ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			  ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
			  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			  ft_putnbr_fd.c

# Bonus source files
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			  ft_lstmap.c

# Object files
OBJS		= $(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

# Default rule (builds mandatory part only)
all: $(NAME)

# Creating the library
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# Compile object files
%.o: %.c
	cc $(FLAGS) -c $< -o $@

# Rule for compiling bonus files
bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Clean object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Full clean (remove object files and library)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all
