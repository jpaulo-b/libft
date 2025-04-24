/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:45:31 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 09:09:22 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  Outputs char 'c' to specified file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int		main(void)
{
	char	a;

	a = 'J';
	ft_putchar_fd(a, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/