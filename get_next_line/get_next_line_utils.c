/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:28:58 by bacem             #+#    #+#             */
/*   Updated: 2024/10/09 10:21:45 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    if (!s)
        return (0);
    size_t len = 0;
    while (s[len])
        len++;
    return (len);
}

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}

char *ft_strjoin(char *s1, char *s2)
{
    if (!s1 && !s2)
        return (NULL);
    
    char *temp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1)* sizeof(char));
    if (!temp)
        return (NULL);
    size_t i = 0;
    size_t j = 0;
    if (s1)
    {
        while (s1[i] != '\0')
        {
            temp[i] = s1[i];
            i++;
        }
    }
    if (s2)
    {
        while (s2[j] != '\0')
        {
            temp[i++] = s2[j++];
        }
    }
    temp[i] = '\0';
    free(s1);
    return (temp);
}

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while (n > 0)
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}

void *ft_calloc(size_t count, size_t size)
{
    char *res;

    res = malloc(size * count);
    if (!res)
        return (NULL);
    ft_bzero(res, size * count);
    return (res);
}
