/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:58:09 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 11:04:51 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlen(const char *str);

int		main(void)
{
	printf("%zu\n", ft_strlen("Hello World!"));
	printf("%zu\n", strlen("Hello World!"));
}*/