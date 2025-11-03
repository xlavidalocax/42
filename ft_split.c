/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:14:23 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:47:58 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	ft_free_all(char **result, int current_index)
{
	while (current_index > 0)
	{
		current_index--;
		free(result[current_index]);
	}
	free(result);
}

static char	**ft_split_setup(char const *s, char c, size_t *word_count)
{
	char	**result;

	*word_count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (*word_count + 1));
	if (!result)
		return (NULL);
	return (result);
}

static char	*ft_get_word(char const *s, int *j, char c)
{
	char	*word;
	int		start;

	while (s[*j] == c)
		(*j)++;
	start = *j;
	while (s[*j] && s[*j] != c)
		(*j)++;
	word = ft_substr(s, start, *j - start);
	return (word);
}

char	**ft_split(char	const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	size_t	word_count;

	if (!s)
		return (NULL);
	result = ft_split_setup(s, c, &word_count);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (int)word_count)
	{
		result[i] = ft_get_word(s, &j, c);
		if (!result[i])
		{
			ft_free_all(result, i);
			return (NULL);
		}
		i++;
	}
	result[word_count] = NULL;
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	**res;
	int	i;
	
	res = ft_split(" Hello world this is 42 ", ' ');
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
