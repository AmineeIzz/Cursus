/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:19:48 by mizem             #+#    #+#             */
/*   Updated: 2024/01/05 23:16:54 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *list;
// 	t_list *first;
// 	t_list *second;

// 	first = ft_lstnew(("abba\n"));
// 	second = ft_lstnew(("zaaba\n"));

// 	list = first;
// 	first->next = second;
// 	t_list *newnode;
// 	newnode = ft_lstnew("12345\n");
// 	ft_lstadd_front(&list, newnode);
// 	while (list)
// 	{
// 		printf("%s", list->content);
// 		list = list->next;
// 	}
// }

//////////////////////////////////////////////////////////////////
	// char **strings;
	// first->next = second;
	// strings = ft_split("aaa bbb ccc ddd", ' ');
	// list = ft_lstnew(ft_strdup("first"));
	// t_list *head = list;
	// for (int i = 0; i < 4; i++)
	// {
	// 	list->next = ft_lstnew(strings[i]);
	// 	list = list->next;
	// }
	// list = head;re first"));
	// ft_lstadd_front(&list, newnode);
	// head = list;
	// t_list *newnode;
	// newnode = ft_lstnew(ft_strdup("befo
	// while (head)
	// {
	// 	printf("%s\n", head->content);
	// 	head = head->next;
	// }
// }