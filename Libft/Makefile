# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bacem <bacem@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 16:13:37 by vseppane          #+#    #+#              #
#    Updated: 2024/10/06 08:07:16 by bacem            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

CC =	cc

CFLAGS =	-Wall -Wextra -Werror

SOURCES =		ft_isalpha.c \
        ft_isdigit.c  \
        ft_isalnum.c  \
        ft_isascii.c  \
        ft_isprint.c  \
        ft_strlen.c  \
        ft_memset.c  \
        ft_bzero.c   \
        ft_memcpy.c  \
        ft_memmove.c  \
        ft_strlcpy.c  \
        ft_strlcat.c  \
        ft_toupper.c  \
        ft_tolower.c  \
        ft_strchr.c  \
        ft_strrchr.c  \
        ft_strncmp.c  \
        ft_memchr.c  \
        ft_strnstr.c  \
        ft_atoi.c  \
		ft_strdup.c \
		ft_calloc.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strlcat.c

BONUSSOURCES =		ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c 

OBJECTS = $(SOURCES:.c=.o)

BONUSOBJECTS = $(BONUSSOURCES:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rc $@ $?

bonus: .bonus

.bonus: $(OBJECTS) $(BONUSOBJECTS)
	$(AR) -rc $(NAME) $?
	@touch .bonus

clean:		
	rm -f $(OBJECTS) $(BONUSOBJECTS)

fclean:		clean
			rm -f $(NAME)
			rm -f .bonus

re:			fclean all

.PHONY: 	all bonus clean fclean re
