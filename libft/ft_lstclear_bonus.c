/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:51:49 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/01 18:31:39 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given node and all its successors, using the function
	'del' and free(3). Finally, set to NULL the pointer to the list.*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
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
	ft_lstclear(&node2, del_content);
	node1->next = NULL;
	printf("\nList without node2 and node3:\n");
	print_list(node1);
	ft_lstdelone(node1, del_content);
	return (0);
}*/