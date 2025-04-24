/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:47:49 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:50:34 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compares the 1 st n bytes of mem areas s1 and s2
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *(str1 + i) == *(str2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(str1 + i) - *(str2 + i));
}
/*#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(void)
{
	char	*src1 = "abcde";
	char	*src2 = "abcdf";
	size_t	n;
	const void *s1;
	const void *s2;

	s1 = (const void *)src1;
	s2 = (const void *)src2;
	n = 5;
	printf("%d \n", ft_memcmp(src1, src2, n));
}*/
