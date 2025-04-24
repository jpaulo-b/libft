/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:46:12 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:51:54 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  copy memory area   - memcpy in <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int		main(void)
{
	char	*dest;
	char	*src;
	size_t	n;

	dest = "";
	src = "Ignatius";
	n = 8;
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	printf("src = %s\n", (char *)ft_memcpy(dest, src, n));
	return (0);
}*/