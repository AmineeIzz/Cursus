/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:49:56 by mizem             #+#    #+#             */
/*   Updated: 2024/01/10 01:19:10 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	real_len(char *dst, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dst[i] != '\0' && dstsize >= 0)
	{
		i++;
		dstsize--;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = real_len(dst, dstsize);
	srclen = ft_strlen(src);
	i = 0;
	while (src[i] && (dstlen + i) + 1 < dstsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	if (dstsize < dstlen)
		return (srclen + dstsize); 
	return (srclen + dstlen);
}

int main()
{
    // char *dst = NULL;
    // char src[] = "12345";
    // printf("AMIINE: %zu\n", ft_strlcat(dst, src, 0));
    // printf("%s\n", dst);
    char *dst1 = NULL;
    char src1[] = "12345";
    printf("BRO: %zu\n", strlcat(dst1, src1, 0));
    printf("%s\n", dst1);
}