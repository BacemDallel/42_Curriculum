/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:52:20 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:22:55 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*fill;
	size_t			i;

	i = 0;
	fill = b;
	while (len > 0)
	{
		fill[i] = c;
		len--;
		i++;
	}
	return (b);
}
