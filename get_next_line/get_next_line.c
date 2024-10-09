/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:48:17 by bacem             #+#    #+#             */
/*   Updated: 2024/10/09 10:25:23 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *res)
{
    char buffer[BUFFER_SIZE + 1];
    ssize_t bytes_read;
    char *temp;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
        {
            buffer[bytes_read] = '\0';
            temp = ft_strjoin(res, buffer);
            if (!temp)
            {
                free(res);
                return (NULL);
            }
            free(res);
            res = temp;
        }
        return (res);
}
char	*ft_line(char *buffer)
{
    size_t  i = 0;
    char *line;

    while (buffer[i] && buffer[i] != '\n')
        i++;
    line = (char *)malloc((i + 2) * sizeof(char));
    if (!line)
        return (NULL);
    i = 0;
    while (buffer[i] != '\n' && buffer[i] != '\0')
    {
        line[i] = buffer[i];
        i++;
    }
    if (buffer[i] == '\n')
    {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return (line);
}
char *ft_next(char *buffer)
{
    int i = 0;
    int j = 0;
    char *next;
    
    if (!buffer)
        return (NULL);
    while (buffer[i] != '\n' && buffer[i])
        i++;
    if (buffer[i] == '\0')
        {
            free(buffer);
            return (NULL);
        }
    next = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
    if (!next)
    {
        free(buffer);
        return (NULL);
    }
    i++;
    while (buffer[i])
        next[j++] = buffer[i++];
    next[j] = '\0';
    free(buffer);
    return(next);
}
char	*get_next_line(int fd)
{
    static char *buffer;
    char        *line;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = read_file(fd, buffer);
    if (!buffer)
        return (NULL);
    line = ft_line(buffer);
    buffer = ft_next(buffer);
    return (line);
}
