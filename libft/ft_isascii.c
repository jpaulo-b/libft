/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:13:14 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:33:56 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks for ascii char (<ctype.h>)
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c);

int		main(void)
{
		printf("%d\n", ft_isascii('a'));
		printf("%d\n", ft_isascii('9'));
		printf("%d\n", ft_isascii(130));
		printf("%d\n\n", ft_isascii(200));
		printf("%d\n", isascii('a'));
		printf("%d\n", isascii('9'));
		printf("%d\n", isascii(130));
		printf("%d\n", isascii(200));
}*/
