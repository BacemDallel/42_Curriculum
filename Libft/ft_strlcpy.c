/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:23:40 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:23:06 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	len;

	src_len = ft_strlen(src);
	if (dstsize <= 0)
		return (src_len);
	if (src_len >= dstsize)
		len = dstsize - 1;
	else
		len = src_len;
	while (len > 0)
	{
		*dst++ = *src++;
		len--;
	}
	*dst++ = '\0';
	return (src_len);
}
