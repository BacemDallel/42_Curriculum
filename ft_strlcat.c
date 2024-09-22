/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:53:52 by bdallel           #+#    #+#             */
/*   Updated: 2024/09/17 10:29:57 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
	{
		return (src_len + size);
	}
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char dest[20] = "Hello";
// 	const char *src = " World!";
// 	size_t size = 20;

// 	size_t result = ft_strlcat(dest, src, size);
// 	printf("Resulting String: '%s', Total Length: %zu\n", dest, result);

// 	return (0);
// }