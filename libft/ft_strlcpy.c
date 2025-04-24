/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:24:21 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 11:04:11 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//   strlcpy  -  size-bounded string copying
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	cnt;

	cnt = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[cnt] != '\0')
		cnt++;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (cnt);
}
