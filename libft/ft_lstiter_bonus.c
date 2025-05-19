/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:02:39 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/02 11:31:25 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  Iterates through the list 'lst' and applies function 'f' to the content
//  of each node
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
/*#include <stdio.h>
#include <string.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
void	del_content(void *content)
{
	free(content);
}
void	add_carago(void *str)
{
	char	*content = (char *)str;
	char	*car = "_carago";
	char	str_car;

	if (ft_strlen(content) + ft_strlen(car) + 1 <= 100)
	{
		strcat(content, car);
	}
}
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("Node 3"));
	
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	printf("Initial list:\n");
	print_list(head);

	ft_lstiter(head, add_carago);
	printf("\nf modified list:\n");
	print_list(head);
	ft_lstclear(&head, del_content);
	return (0);
}*/