/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:29:08 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/22 18:03:07 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  The string is created from successive application of 'f'
//  Returns NULL if allocation fails
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	i = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

char	test_func(unsigned int i, char c)
{
	//printf("Test function: index = %d and %c\n", i, c);
	c -= 32;
	return (c);
}
int		main(void)
{
	char c = 'A';
	unsigned int i = 32;
	const char	str[] = "horizon";
	char	*res = ft_strmapi(str, test_func);

	printf("The result is %s\n", str);
	printf("The result is %s\n", res);
	return (0);
}*/