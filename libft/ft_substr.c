/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:23:23 by mizem             #+#    #+#             */
/*   Updated: 2024/01/05 16:22:00 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	srclen;
	size_t	khawi;

	i = 0;
	if (!s)
		return (NULL);
	srclen = ft_strlen(s); 
	khawi = len;
	if (start >= srclen)
		return (ft_strdup(""));
	if (srclen <= len + start)
		khawi = srclen - start;
	dst = (char *)malloc((khawi + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (i < khawi)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
// int main()
// {
//     // char s[] = "12345";
//     printf("%s\n", ft_substr(NULL, 0, 18));
// }