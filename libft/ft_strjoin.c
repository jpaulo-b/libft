/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:35:24 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 11:03:16 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  concatenate 2 strings in a new string
char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*sjoin;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (NULL);
	sjoin = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!sjoin)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		sjoin[i + j] = s2[j];
		j++;
	}
	sjoin[i + j] = '\0';
	return (sjoin);
}
