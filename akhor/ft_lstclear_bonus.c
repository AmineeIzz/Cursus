/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:03:50 by mizem             #+#    #+#             */
/*   Updated: 2024/01/06 00:20:20 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void delete(void *node_content);
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_delete;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		to_delete = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(to_delete, del);
	}
}
// void delete(void *node_content)
// {
// 	free(node_content);
// }
// int main()
// {
// 	t_list *list;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	node1 = ft_lstnew(ft_strdup("babobi"));
// 	node2 = ft_lstnew(ft_strdup("alaba"));
// 	node3 = ft_lstnew(ft_strdup("123"));
// 	// printf("%s\n", node3->content);
// 	list = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstclear(&list, delete);
// 	printf("%p", node3);
// }