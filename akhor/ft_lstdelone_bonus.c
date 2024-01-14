/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:42:47 by mizem             #+#    #+#             */
/*   Updated: 2024/01/05 17:16:47 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void delete(void *node_content);
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void delete(void *node_content)
// {
// 	free(node_content);
// }
// int main()
// {
// 	t_list *node;

// 	node = ft_lstnew(ft_strdup("bzbz"));
// 	ft_lstdelone(node, delete);
// 	printf("%s\n", node->content);
// 	printf("%s", node->next);
// }