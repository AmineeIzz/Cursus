/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:59:14 by mizem             #+#    #+#             */
/*   Updated: 2023/12/29 16:39:37 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	y;
	char	*dst;

	i = ft_strlen(s1);
	y = 0;
	dst = malloc((i + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (s1[y])
	{
		dst[y] = s1[y];
		y++;
	}
	dst[y] = '\0';
	return (dst);
}

// int main()
// {
//     char s1[] = "zblbola";
//     printf("%s\n", ft_strdup(s1));
//     char s2[] = "zblbola";
//     printf("%s", strdup(s2));
// }