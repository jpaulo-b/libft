/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:16:00 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:40:36 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  allocate dynamic memory, setting to zero every positions
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return ((void *)tmp);
}
/*
#include <stdio.h>

int		main(void)
{
		unsigned char	*tmp;
		size_t			i;

		i = 0;
		while (i < nmemb * size)
		{
			printf("tmp with garbage values %s", tmp[i]);
			i++;
		}
}
*/