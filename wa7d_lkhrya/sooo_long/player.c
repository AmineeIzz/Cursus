/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:31:17 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:58:34 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	allocate_player(t_map *var)
{
	var->player_texture = mlx_load_png("images/player.png");
	texture_check(var->player_texture, var);
	var->player_img = mlx_texture_to_image(var->mlx, var->player_texture);
}

void	player(t_map *var)
{
	int	i;
	int	j;
	int	y;
	int	x;

	i = 0;
	y = 0;
	allocate_player(var);
	while (var->arr[i])
	{
		x = 0;
		j = 0;
		while (var->arr[i][j])
		{
			if (var->arr[i][j] == 'P')
			{
				mlx_image_to_window(var->mlx, var->player_img, x, y);
				break ;
			}
			x += 65;
			j++;
		}
		y += 65;
		i++;
	}
}
