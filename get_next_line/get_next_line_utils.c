/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:58:54 by mizem             #+#    #+#             */
/*   Updated: 2024/01/27 15:49:35 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*dst;
	size_t 	i;
	size_t 	s1len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	i = 0;
	dst = malloc((s1len + ft_strlen(s2) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < s1len)
	{
		dst[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		dst[s1len + i] = s2[i];
		i++;
	}
	dst[s1len + i] = '\0';
	free(s1);
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t  i;
	size_t	y;
	char    *dst;

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