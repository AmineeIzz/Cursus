/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:45:47 by mizem             #+#    #+#             */
/*   Updated: 2024/01/09 00:35:33 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *list;
// 	t_list *firstnode;
// 	t_list *secondnode;	
// 	firstnode = ft_lstnew("zblbola");
// 	secondnode = ft_lstnew("12345");
// 	list = firstnode;
// 	firstnode->next = secondnode;
// 	printf("%d", ft_lstsize(list));	
// }