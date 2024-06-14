/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 20:34:16 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:24:39 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	chars_check(t_map *var)
{
	int	i;
	int	y;

	i = 0;
	while (var->arr[i])
	{
		y = 0;
		while (var->arr[i][y])
		{
			if (var->arr[i][y] != 'C' && var->arr[i][y] != 'E' 
				&& var->arr[i][y] != 'P' && var->arr[i][y] != '0' 
				&& var->arr[i][y] != '1' && var->arr[i][y] != '\n')
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}

int	collectibles_check(t_map *var)
{
	int	i;
	int	y;
	int	j;

	i = 0;
	j = 0;
	while (var->arr[i])
	{
		y = 0;
		while (var->arr[i][y])
		{
			if (var->arr[i][y] == 'C')
				j = j + 1;
			y++;
		}
		i++;
	}
	return (j);
}

int	player_check(t_map *var)
{
	int	i;
	int	y;
	int	j;

	i = 0;
	j = 0;
	while (var->arr[i])
	{
		y = 0;
		while (var->arr[i][y])
		{
			if (var->arr[i][y] == 'P')
				j = j + 1;
			y++;
		}
		i++;
	}
	return (j);
}

int	exit_check(t_map *var)
{
	int	i;
	int	y;
	int	j;

	i = 0;
	j = 0;
	while (var->arr[i])
	{
		y = 0;
		while (var->arr[i][y])
		{
			if (var->arr[i][y] == 'E')
				j = j + 1;
			y++;
		}
		i++;
	}
	return (j);
}
