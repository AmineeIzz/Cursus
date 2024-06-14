/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:10:14 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:50:09 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	delete_texture(t_map *var)
{
	if (var->walls_texture)
		mlx_delete_texture(var->walls_texture);
	if (var->player_texture)
		mlx_delete_texture(var->player_texture);
	if (var->exit_texture)
		mlx_delete_texture(var->exit_texture);
	if (var->background_texture)
		mlx_delete_texture(var->background_texture);
	if (var->banana_texture)
		mlx_delete_texture(var->banana_texture);
}

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
