/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:52:53 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 14:00:33 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "../MLX42/include/MLX42/MLX42.h"
# include <stdio.h>
# include <fcntl.h>

typedef struct s_map
{
	char			**arr;
	char			*map;
	int				width;
	int				height;
	int				x;
	int				y;
	int				pl_x;
	int				pl_y;
	int				collectibles_amount;
	int				moves;
	int				flag;
	mlx_t			*mlx;
	mlx_texture_t	*walls_texture;
	mlx_image_t		*walls_img;
	mlx_texture_t	*background_texture;
	mlx_image_t		*background_img;
	mlx_texture_t	*banana_texture;
	mlx_image_t		*banana_img;
	mlx_texture_t	*exit_texture;
	mlx_image_t		*exit_img;
	mlx_texture_t	*player_texture;
	mlx_image_t		*player_img;
}t_map;

int		fd_counter(void);
int		count_collumns(t_map *var);
int		count_lines(t_map *var);
int		collectibles_check(t_map *var);
int		player_check(t_map *var);
int		exit_check(t_map *var);
int		file_check(t_map *var);
int		square_check(t_map *var);
int		border_check(t_map *var);
int		chars_check(t_map *var);
int		flud_check(t_map *var);
void	fill_map(t_map *var);
void	player(t_map *var);
void	texture_check(mlx_texture_t *texture, t_map *var);
void	ft_free(char **arr);
void	delete_texture(t_map *var);
void	keys(mlx_key_data_t data, void *ptr);

#endif