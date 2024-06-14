/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 20:38:11 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:21:46 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	fd_counter(void)
{
	char	*ptr;
	int		i;
	int		fd;

	i = 0;
	fd = open("map.ber", O_RDWR);
	while (1)
	{
		ptr = get_next_line(fd);
		if (!ptr)
			break ;
		free(ptr);
		i++;
	}
	close(fd);
	return (i);
}

int	count_collumns(t_map *var)
{
	int	i;

	i = 0;
	while (var->arr[0][i] && var->arr[0][i] != '\n')
		i++;
	return (i);
}

int	count_lines(t_map *var)
{
	int	i;

	i = 0;
	while (var->arr[i])
		i++;
	return (i);
}
