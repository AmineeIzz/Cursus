/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:39:59 by mizem             #+#    #+#             */
/*   Updated: 2024/06/13 13:52:05 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	leaks(void)
{
	system("leaks so_long");
}

void	parsing(t_map *var)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(var->map, O_RDWR);
	var->arr = malloc((fd_counter() + 10) * sizeof(char *));
	while (1)
	{
		var->arr[i] = get_next_line(fd);
		if (!var->arr[i])
			break ;
		i++;
	}
	var->arr[i] = 0;
	if (collectibles_check(var) < 1 || player_check(var) != 1 
		|| exit_check(var) != 1 || chars_check(var) || square_check(var) 
		|| border_check(var) || flud_check(var) == 1)
	{
		ft_printf("Error!\n");
		ft_free(var->arr);
		exit(1);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	t_map	var;

	if (ac != 2)
		exit (1);
	var.map = av[1];
	atexit(leaks);
	file_check(&var);
	parsing(&var);
	var.height = count_lines(&var) * 65;
	var.width = count_collumns(&var) * 65;
	var.mlx = mlx_init(var.width, var.height, "dude", false);
	fill_map(&var);
	player(&var);
	mlx_key_hook(var.mlx, keys, &var);
	mlx_loop(var.mlx);
	ft_free(var.arr);
	delete_texture(&var);
	mlx_terminate(var.mlx);
}
