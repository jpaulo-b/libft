/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:21:44 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/01 18:31:36 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  Adds the node 'new' at the beginning of the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
//(*new).next = *lst;
/*#include <stdio.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("Node 3"));
	t_list	*temp;

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	print_list(head);
	while (head)
	{
		temp = head->next;
		free(head->content);
		free(head);
		head = temp;
	}
	return (0);
}*/