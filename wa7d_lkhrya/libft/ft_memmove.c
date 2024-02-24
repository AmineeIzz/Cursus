/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:08 by mizem             #+#    #+#             */
/*   Updated: 2024/01/06 22:11:09 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_src >= ptr_dst)
		return (ft_memcpy(ptr_dst, ptr_src, len));
	else
	{
		while (len)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
		return (ptr_dst);
	}
}
