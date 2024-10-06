# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bacem <bacem@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 10:32:32 by bacem             #+#    #+#              #
#    Updated: 2024/10/06 10:44:37 by bacem            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

SRCS = ft_printf.c ft_print_helpers.c ft_printnbr.c main.c
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

