/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:29:13 by bacem             #+#    #+#             */
/*   Updated: 2024/10/09 10:26:11 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
void *ft_calloc(size_t count, size_t size);
void ft_bzero(void *s, size_t n);
char *ft_strjoin(char *s1, char *s2);
#endif