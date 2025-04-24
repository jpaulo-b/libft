/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:07:27 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/14 17:51:25 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  locates a substring in a string
//  locates 1 st occ of null-terminated str little in str big
//  pointer to 1 st char of 1 st occ of little is returned
//  if little occurs nowhere in big -> NULL; if little is empty -> ret big
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*bi;
	char	*li;
	size_t	l;

	if (!big && !len)
		return (0);
	bi = (char *)big;
	li = (char *)little;
	l = len;
	if (*little == 0)
		return ((char *)big);
	while (*big && len > 0)
	{
		while (*big && *little && *big == *little && len-- > 0)
		{
			big++;
			little++;
		}
		if (!*little)
			return (bi);
		big = ++bi;
		little = li;
		len = --l;
	}
	return (NULL);
}
