/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:44:43 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/01 18:31:41 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  takes a node as param and frees its content using 'del'. Free the node
//  itself but does not free the next node.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
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
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("Node 3"));

	node1->next = node2;
	node2->next = node3;
	printf("Initial list:\n");
	print_list(node1);
	ft_lstdelone(node2, del_content);
	node1->next = node3;
	printf("\nList without node2:\n");
	print_list(node1);
	ft_lstdelone(node1, del_content);
	ft_lstdelone(node3, del_content);
	return (0);
}*/