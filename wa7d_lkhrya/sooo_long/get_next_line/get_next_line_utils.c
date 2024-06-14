/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:58:54 by mizem             #+#    #+#             */
/*   Updated: 2024/03/09 09:53:22 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_strdup(char *s1)
{
	size_t	i;
	size_t	y;
	char	*dst;

	i = ft_strlen(s1);
	y = 0;
	dst = malloc((i + 1));
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	dst = ft_calloc(((ft_strlen(s1) + ft_strlen(s2)) + 1), 1);
	j = 0;
	while (s1[j])
	{
		dst[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		dst[j + i] = s2[i];
		i++;
	}
	dst[j + i] = '\0';
	free(s1);
	return (dst);
}

int	ft_strchr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (-1);
}
