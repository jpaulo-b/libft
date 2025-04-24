/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:42:23 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/24 12:18:01 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//   size-bounded string concatenation - strlcat -- <string.h>
//  returns the total length of string tried to create - srclen + dstlen
size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	j;

	if (!dst && size == 0)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	j = 0;
	while (j < size - dstlen - 1 && src[j])
	{
		dst[dstlen + j] = src[j];
		j++;
	}
	dst[dstlen + j] = '\0';
	return (dstlen + srclen);
}
