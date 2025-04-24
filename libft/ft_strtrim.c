/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:15 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 11:10:49 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  trims char set at start and end of string, without affecting the middle
static char	*new_str(const char *s1, size_t start, size_t len);
static int	to_trim(const char *set, char c);

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	
	s1 = "abbaJorgebaab";
	set = "ab";
	printf("s1 = %s\t set = %s\n", s1, set);
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/