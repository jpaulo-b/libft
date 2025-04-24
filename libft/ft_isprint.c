/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:03:15 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:35:29 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  checks for any printable char, including space (<ctype.h>)
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c);

int		main(void)
{
		printf("%d\n", ft_isprint('a'));
		printf("%d\n", ft_isprint('9'));
		printf("%d\n", ft_isprint(30));
		printf("%d\n\n", ft_isprint(200));
		printf("%d\n", isprint('a'));
		printf("%d\n", isprint('9'));
		printf("%d\n", isprint(30));
		printf("%d\n", isprint(200));
}*/
