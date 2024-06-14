/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flud.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:41:14 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:48:34 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**flud_cpy(t_map *var)
{
	int		fd;
	int		i;
	char	**map;

	i = 0;
	fd = open(var->map, O_RDWR);
	if (fd < 0)
		exit (1);
	map = malloc((fd_counter() + 10) * sizeof(char *));
	while (1)
	{
		map[i] = get_next_line(fd);
		if (!map[i])
			break ;
		i++;
	}
	map[i] = 0;
	close(fd);
	return (map);
}

void	flud_fill(char **map, int y, int x)
{
	map[y][x] = '1';
	if (map[y + 1][x] != '1')
		flud_fill(map, y + 1, x);
	if (map[y - 1][x] != '1')
		flud_fill(map, y - 1, x);
	if (map[y][x + 1] != '1')
		flud_fill(map, y, x + 1);
	if (map[y][x - 1] != '1')
		flud_fill(map, y, x - 1);
}

int	leftovers_check(char **map)
{
	int	i;
	int	y;

	i = 0;
	while (map[i])
	{
		y = 0;
		while (map[i][y])
		{
			if (map[i][y] == 'C' || map[i][y] == 'E')
			{
				ft_free(map);
				return (1);
			}
			y++;
		}
		i++;
	}
	ft_free(map);
	return (0);
}

int	flud_check(t_map *var)
{
	int		y;
	int		x;
	char	**map;

	map = flud_cpy(var);
	var->flag = 0;
	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (map[y][x] == 'P')
			{
				var->flag = 1;
				break ;
			}
		}
		if (var->flag == 1)
			break ;
	}
	flud_fill(map, y, x);
	if (leftovers_check(map) == 1)
		return (1);
	return (0);
}
