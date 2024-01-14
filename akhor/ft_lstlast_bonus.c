/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:10:00 by mizem             #+#    #+#             */
/*   Updated: 2024/01/09 00:42:48 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
// 	t_list *list;
// 	t_list *NEW_node;
// 	t_list *node;
// 	t_list *node2;
// 	t_list *node3;
// 	node = ft_lstnew("zblbola");
// 	node2 = ft_lstnew("lalala");
// 	node3 = ft_lstnew("123");
// 	list = node;
// 	node->next = node2;
// 	node2->next = node3;

// 	NEW_node = ft_lstlast(list);
// 	printf("%s\n\n", NEW_node->content);
// 	while (list)
// 	{
// 	printf("%s\n", list->content);
// 		list = list->next;
// 	}
// }