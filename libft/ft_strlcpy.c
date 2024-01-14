/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:06:05 by mizem             #+#    #+#             */
/*   Updated: 2023/12/25 17:21:53 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen(src);
	if (dstsize == 0)
		return (strlen);
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen);
}

// int main()
// {
// char dst[] = "";
// char src[] = "badr";
// char dst1[] = "";
// char src1[] = "badr";
// printf("this is ft_strlcpy : %zu\n", ft_strlcpy(dst, src, 0));
// printf("%s\n", dst);
// printf("this is strlcpy : %zu\n", strlcpy(dst1, src1, 0));
// printf("%s\n", dst1);
// }