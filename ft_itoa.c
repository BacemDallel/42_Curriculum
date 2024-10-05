/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:37:40 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:59:33 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	insert_chars(char *res, int n, int sign, size_t count)
{
	long	ln;
	int		remainder;
	size_t	i;

	ln = n;
	i = 0;
	if (ln < 0)
		ln = -ln;
	else
		sign = 0;
	while (count > i)
	{
		remainder = ln % 10;
		ln = ln / 10;
		res[sign + count - i - 1] = remainder + '0';
		i++;
	}
}

static int	is_negative(int n)
{
	return (n < 0);
}

static size_t	count_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	size_t	count;

	sign = is_negative(n);
	count = count_digits(n);
	res = (char *)malloc((sign + count + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (sign)
		res[0] = '-';
	res[sign + count] = '\0';
	insert_chars(res, n, sign, count);
	return (res);
}
