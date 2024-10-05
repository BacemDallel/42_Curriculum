/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:32:42 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:23:12 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*n;

	i = 0;
	j = 0;
	while (haystack[i] && needle[j] && len > i)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && haystack[i] && needle[j]
				&& len > i)
			{
				if (needle[j + 1] == '\0')
					return (n = (char *)haystack - j + i);
				i++;
				j++;
			}
		}
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*n;

	if ((!haystack && len == 0) || (!needle && len == 0))
		return (NULL);
	if ((int)ft_strlen(needle) == 0)
		return ((char *)haystack);
	n = search(haystack, needle, len);
	return (n);
}
