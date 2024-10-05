/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:50:46 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:22:53 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	ret;

	ret = n;
	if (!src && !dst)
		return (dst);
	while (n--)
	{
		*(char *)dst = *(char *)src;
		src++;
		dst++;
	}
	return (dst - ret);
}
