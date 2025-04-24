/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:48:39 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 12:34:37 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  split a file into pieces;

void	ini_vars(size_t *i, int *j, int *s_word);
int		word_count(const char *str, char c);
char	*fill_word(const char *str, int start, int end);
void	*ft_free(char **strs);

char	**ft_split(const char *s, char c)
{
	char	**big_array;
	size_t	i;
	int		j;
	int		s_word;

	if (!s)
		return (NULL);
	ini_vars(&i, &j, &s_word);
	big_array = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!big_array || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			big_array[j] = fill_word(s, s_word, i);
			if (!big_array[j++])
				return (ft_free(big_array));
			s_word = -1;
		}
		i++;
	}
	return (big_array);
}

void	ini_vars(size_t *i, int *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

int	word_count(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	*ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Good morning, Vietnam!";
	char	**words = ft_split(str, ' ');
	int		i;

	if (words)
	{
		printf("Separate words :\n");
		i = 0;
		while(words[i] != NULL)
		{
			printf("%s\n", words[i]);
			free(words[i++]);
		}
		free(words);
	}
	else
		printf("Allocation memory error!\n");
	return (0);
}*/