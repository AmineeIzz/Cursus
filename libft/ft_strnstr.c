/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:32 by mizem             #+#    #+#             */
/*   Updated: 2024/01/06 00:27:48 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dst, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dst[i] == '\0')
		return ((char *)src);
	if (len == 0)
		return (NULL);
	while (src[i])
	{
		j = 0;
		while (dst[j] == src[i + j] && i + j < len && dst[j])
		{
			j++;
		}
		if (!dst[j])
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	printf("%s", ft_strnstr(NULL, "123", 0));
// }