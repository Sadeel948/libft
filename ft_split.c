/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:19:40 by syaseen           #+#    #+#             */
/*   Updated: 2026/09/23 16:20:45 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static void	free_split(char **arr, size_t count)
{
	while (count > 0)
		free(arr[--count]);
	free(arr);
}

static char	*word_split(const char *s, char c)
{
	char	*word;
	int		length;
	int		i;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**function(const char *s, char **final, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			final[j] = word_split(&s[i], c);
			if (!final[j])
			{
				free_split(final, j);
				return (NULL);
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	final[j] = NULL;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;

	if (!s)
		return (NULL);
	final = (char **)malloc (sizeof(char *) * (count_words(s, c) + 1));
	if (!final)
		return (NULL);
	return (function(s, final, c));
}
