/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:17:33 by bdallel           #+#    #+#             */
/*   Updated: 2024/09/17 09:52:14 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
	{
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// void	*ft_memmove(void *dest, const void *src, size_t n);

// int	main(void)
// {
// 	char	buffer[20] = "Hello, World!";

// 	// Test when destination is after the source
// 	printf("Original buffer: %s\n", buffer);
// 	ft_memmove(buffer, buffer + 7, 12);
// 	printf("Modified buffer (dest after src): %s\n", buffer);
// 	return (0);
// }
