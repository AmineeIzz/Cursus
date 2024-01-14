/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:58:14 by mizem             #+#    #+#             */
/*   Updated: 2024/01/09 15:39:57 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void fill(void *filler);
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
void fill(void *filler)
{	
	while (*(char *)filler)
	{
		*(char *)filler = 'a';
		filler++;
	}
}
// int main()
// {
// 	t_list *list;
// 	t_list *node1;
// 	char arr[] = "12345";
// 	node1 = ft_lstnew(arr);
// 	list = node1;
// 	printf("%s\n", list->content);
// 	ft_lstiter(node1, fill);
// 	printf("%s\n", list->content);
// }