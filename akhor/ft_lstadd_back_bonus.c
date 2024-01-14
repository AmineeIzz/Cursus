/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:39:38 by mizem             #+#    #+#             */
/*   Updated: 2024/01/06 00:19:20 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	(ft_lstlast(*lst))->next = new;
}
// int main()
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *new_node;
// 	t_list *head;
// 	node1 = ft_lstnew("babobi");
// 	node2 = ft_lstnew("12345");
// 	new_node = ft_lstnew("yeah");
// 	node1->next = node2;
// 	head = NULL;
// 	ft_lstadd_back(NULL, NULL);
// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }