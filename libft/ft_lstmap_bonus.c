/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:14:19 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/02 15:07:54 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Iterates through the list 'lst', applies the function 'f' to each
	node's content and creates a new list resulting of successive
	applications of 'f'. The 'del' function is used to delete the
	content of a node if needed.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_obj;
	t_list	*new_list;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_obj = ft_lstnew(tmp);
		if (!new_obj)
		{
			del(tmp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
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

void	*add_carago(void *temp)
{
	char	*new_str;
	char	*car = "_carago";
	char	*str = (char *)temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_str = malloc(50);
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	while (car[j])
	{
		new_str[i + j] = car[j];
		j++;
	}
	new_str[i + j] = 0;
	return (new_str);
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("Node 3"));
	t_list	*fmod;
	
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	printf("Initial list:\n");
	print_list(head);

	fmod = ft_lstmap(head, add_carago, del_content);

	printf("\nf modified list:\n");
	print_list(fmod);
	print_list(head);

	ft_lstclear(&head, del_content);
	return (0);
}*/