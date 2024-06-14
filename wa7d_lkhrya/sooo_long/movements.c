/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:16:40 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:58:01 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movements1(mlx_key_data_t data, t_map *var)
{
	var->pl_x = var->player_img->instances[0].x / 65;
	var->pl_y = var->player_img->instances[0].y / 65;
	if (data.key == MLX_KEY_ESCAPE)
		mlx_close_window(var->mlx);
	if (data.key == MLX_KEY_W && data.action 
		&& var->arr[var->pl_y - 1][var->pl_x] != '1')
	{
		var->player_img->instances[0].y -= 65;
		var->moves++;
		ft_printf("Moves : %d\n", var->moves);
	}
	else if (data.key == MLX_KEY_S && data.action 
		&& var->arr[var->pl_y + 1][var->pl_x] != '1')
	{
		var->player_img->instances[0].y += 65;
		var->moves++;
		ft_printf("Moves : %d\n", var->moves);
	}
}

void	movements2(mlx_key_data_t data, t_map *var)
{
	var->pl_x = var->player_img->instances[0].x / 65;
	var->pl_y = var->player_img->instances[0].y / 65;
	if (data.key == MLX_KEY_ESCAPE)
		mlx_close_window(var->mlx);
	if (data.key == MLX_KEY_A && data.action 
		&& var->arr[var->pl_y][var->pl_x - 1] != '1')
	{
		var->player_img->instances[0].x -= 65;
		var->moves++;
		ft_printf("Moves : %d\n", var->moves);
	}
	else if (data.key == MLX_KEY_D && data.action 
		&& var->arr[var->pl_y][var->pl_x + 1] != '1')
	{
		var->player_img->instances[0].x += 65;
		var->moves++;
		ft_printf("Moves : %d\n", var->moves);
	}
}

void	respawn_player(t_map *var)
{
	mlx_delete_image(var->mlx, var->player_img);
	var->player_img = mlx_texture_to_image(var->mlx, var->player_texture);
	mlx_image_to_window(var->mlx, var->player_img, 
		var->pl_x * 65, var->pl_y * 65);
}

void	keys(mlx_key_data_t data, void *ptr)
{
	t_map	*var;

	var = (t_map *)ptr;
	movements1(data, var);
	movements2(data, var);
	if (var->arr[var->pl_y][var->pl_x] == 'C')
	{
		mlx_image_to_window(var->mlx, var->background_img, 
			var->pl_x * 65, var->pl_y * 65);
		var->arr[var->pl_y][var->pl_x] = '0';
		respawn_player(var);
		var->collectibles_amount--;
	}
	if (var->arr[var->pl_y][var->pl_x] == 'E' && var->collectibles_amount == 0)
		mlx_close_window(var->mlx);
}
