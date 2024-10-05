/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:57:49 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:23:02 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ch;

	i = 0;
	c = (char)c;
	ch = (char *)s;
	while (s[i] && c <= 255)
	{
		if (*ch == c + 0)
			return (ch);
		ch++;
		i++;
	}
	if (*ch == c + 0)
		return (ch);
	return (NULL);
}
