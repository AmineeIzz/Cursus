/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:32 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:18:24 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strstr(char *src, char *dst, size_t i)
{
	size_t	j;

	if (dst[i] == '\0')
		return (1);
	while (src[i])
	{
		j = 0;
		while (dst[j] == src[i + j] && dst[j])
			j++;
		if (!dst[j] && ft_strlen(dst) == j)
			return (j);
		i++;
	}
	return (1);
}
