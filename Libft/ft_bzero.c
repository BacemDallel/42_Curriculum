/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:39:24 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:22:27 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = (unsigned char *)s;
	while (n > 0)
	{
		ch[i] = 0;
		n--;
		i++;
	}
}
