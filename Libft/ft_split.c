/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdallel <bdallel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:35:06 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/03 10:23:01 by bdallel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_start_end(char const *s, char c, int *start)
{
	int	word;
	int	i;

	word = 0;
	i = *start;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			*start = i;
		}
		else if (s[i] == c && word == 1)
			break ;
		i++;
	}
	return (i - *start);
}

static char	**free_all(char **strings, int i)
{
	while (i >= 0)
	{
		free(strings[i]);
		i--;
	}
	free(strings);
	return (NULL);
}

static char	**to_substrings(char const *s, char c, int words, char **strings)
{
	int	start;
	int	len;
	int	i;

	start = 0;
	i = 0;
	while (i < words)
	{
		len = word_start_end(s, c, &start);
		strings[i] = ft_substr(s, start, len);
		if (!strings[i])
			return (free_all(strings, i));
		i++;
		start += len;
	}
	strings[i] = NULL;
	return (strings);
}

static void	count_words(char const *s, char c, int *words)
{
	int	word;

	word = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			word = 1;
			*words += 1;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**strings;

	if (!s)
		return (NULL);
	words = 0;
	count_words(s, c, &words);
	strings = (char **)malloc((words + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	if (!to_substrings(s, c, words, strings))
		return (NULL);
	return (strings);
}
