/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:05:00 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:41:56 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  checks for alphanumeric char (<ctype.h>)
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c);

int		main(void)
{
		printf("%d\n", ft_isalnum('a'));
		printf("%d\n", ft_isalnum('9'));
		printf("%d\n\n", ft_isalnum('\0'));
		printf("%d\n\n", ft_isalnum(' '));
		printf("%d\n", isalnum('a'));
		printf("%d\n", isalnum('9'));
		printf("%d\n", isalnum('\0'));
		printf("%d\n", isalnum(' '));
}*/
