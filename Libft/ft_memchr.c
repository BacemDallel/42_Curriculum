/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:49:00 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:22:50 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	size_t			stlen;

	stlen = ft_strlen((char *)s);
	c = (unsigned char)c;
	st = (unsigned char *)s;
	while (st && n)
	{
		if (*st == c + 0)
			return (st);
		stlen--;
		st++;
		n--;
	}
	return (NULL);
}
