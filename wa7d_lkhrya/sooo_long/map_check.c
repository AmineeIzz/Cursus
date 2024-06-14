/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 20:46:53 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:54:22 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	square_check(t_map *var)
{
	int	i;
	int	y;

	i = 0;
	y = count_collumns(var);
	while (var->arr[i])
	{
		if (count_collumns(var) != y)
			return (1);
		i++;
	}
	return (0);
}

int	border_check(t_map *var)
{
	int	i;
	int	y;
	int	j;

	y = 0;
	j = 0;
	while (var->arr[y])
		y++;
	i = 0;
	while (var->arr[0][i] && var->arr[0][i] != '\n')
	{
		if (var->arr[0][i] != '1' || var->arr[y - 1][i] != '1')
			return (1);
		i++;
	}
	y = count_lines(var) - 2;
	while (var->arr[1][j] && var->arr[0][j + 1] != '\n')
		j++;
	while (y > 0)
	{
		if (var->arr[y][0] != '1' || var->arr[y][j] != '1')
			return (1);
		y--;
	}
	return (0);
}

int	file_check(t_map *var)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (var->map[i])
	{
		if (var->map[i] == '.')
		{
			count += 1;
			if (ft_strstr(var->map, ".ber", i) == 1)
			{
				ft_printf("Invalid Map!");
				exit(1);
			}
		}
		i++;
	}
	if (!(var->map[i - 1] == 'r' && var->map[i - 2] == 'e' 
			&& var->map[i - 3] == 'b'))
	{
		ft_printf("Invalid Map!");
		exit(1);
	}
	return (count);
}
