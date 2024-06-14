/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:37:33 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:45:28 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	texture_check(mlx_texture_t *texture, t_map *var)
{
	if (!texture)
	{
		ft_free(var->arr);
		ft_printf("Error\nTexture not valid!\n");
		exit(1);
	}
}

void	allocate_images(t_map *var)
{
	var->walls_texture = mlx_load_png("images/1.png");
	texture_check(var->walls_texture, var);
	var->walls_img = mlx_texture_to_image(var->mlx, var->walls_texture);
	var->background_texture = mlx_load_png("images/0.png");
	texture_check(var->background_texture, var);
	var->background_img = mlx_texture_to_image
		(var->mlx, var->background_texture);
	var->exit_texture = mlx_load_png("images/exit.png");
	texture_check(var->exit_texture, var);
	var->exit_img = mlx_texture_to_image(var->mlx, var->exit_texture);
	var->banana_texture = mlx_load_png("images/banana.png");
	texture_check(var->banana_texture, var);
	var->banana_img = mlx_texture_to_image(var->mlx, var->banana_texture);
}

void	objects(t_map *var, int i, int j)
{
	if (var->arr[i][j] == '1')
		mlx_image_to_window(var->mlx, var->walls_img, var->x, var->y);
	else if (var->arr[i][j] == 'C')
	{
		mlx_image_to_window(var->mlx, var->banana_img, var->x, var->y);
		var->collectibles_amount += 1;
	}
	else if (var->arr[i][j] == 'E')
		mlx_image_to_window(var->mlx, var->exit_img, var->x, var->y);
}

void	fill_map(t_map *var)
{
	int	i;
	int	j;

	i = 0;
	var->y = 0;
	var->collectibles_amount = 0;
	allocate_images(var);
	while (var->arr[i])
	{
		var->x = 0;
		j = 0;
		while (var->arr[i][j])
		{
			mlx_image_to_window(var->mlx, var->background_img, var->x, var->y);
			objects(var, i, j);
			var->x += 65;
			j++;
		}
		var->y += 65;
		i++;
	}
}
