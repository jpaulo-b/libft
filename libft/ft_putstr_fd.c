/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:14:24 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/04/23 10:59:18 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  Outputs string 's' to specified file descriptor
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*int		main(void)
{
	char	*s = "Magnetar";

	ft_putstr_fd(s, 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/