/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:40:55 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:32:46 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  checks for alphabetic char (<ctype.h>)
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);

int		main(void)
{
		printf("%d\n", ft_isalpha('a'));
		printf("%d\n", ft_isalpha('9'));
		printf("%d\n\n", ft_isalpha('\0'));
		printf("%d\n", isalpha('a'));
		printf("%d\n", isalpha('9'));
		printf("%d\n", isalpha('\0'));
}*/
