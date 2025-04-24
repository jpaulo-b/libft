/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:45:17 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 14:22:20 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*conv_chr(int len);
static int	int_len(long nbr);

//  integer to ascii; the inverse of atoi; convert an int into a string
char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			neg;
	long int	nbr;

	nbr = n;
	//neg = nbr < 0;
	if (nbr < 0)
	{
		neg = 0;
		nbr = -nbr;
	}
	len = int_len(nbr) + neg;
	res = conv_chr(len);
	if (!res)
		return (NULL);
	ft_memset(res, '-', 1);
	res[len] = '\0';
	while (len > neg)
	{
		res[(len--) - 1] = (char)((nbr % 10) + '0');
		nbr = nbr / 10;
	}
	return (res);
}

static char	*conv_chr(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	return (tmp);
}

static int	int_len(long nbr)
{
	int	count;

	count = 1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

#include <stdio.h>

int	main(void)
{
	int	n;

	n = 2147483647;
	printf("%s\n", ft_itoa(n));
	return (0);
}
