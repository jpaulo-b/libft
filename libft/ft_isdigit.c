/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:46:33 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:34:38 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  checks for numeric char (<ctype.h>)
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c);

int		main(void)
{
		printf("%d\n", ft_isdigit('a'));
		printf("%d\n", ft_isdigit('9'));
		printf("%d\n\n", ft_isdigit('\0'));
		printf("%d\n", isdigit('a'));
		printf("%d\n", isdigit('9'));
		printf("%d\n", isdigit('\0'));
}*/
