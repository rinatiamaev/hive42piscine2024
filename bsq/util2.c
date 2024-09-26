/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:59:49 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/25 17:43:29 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned char	*p;
	unsigned int	i;

	p = ptr;
	i = 0;
	while (i < num)
		p[i++] = value;
}

void	free_map(t_Map *map_info)
{
	int	i;

	i = 0;
	while (i < map_info->rows)
		free(map_info->map[i++]);
	free(map_info->map);
}

int	**initialize_dp(int rows, int cols)
{
	int	**dp;
	int	i;

	dp = malloc(rows * sizeof(int *));
	i = 0;
	while (i < rows)
	{
		dp[i] = malloc(cols * sizeof(int));
		ft_memset(dp[i], 0, cols * sizeof(int));
		i++;
	}
	return (dp);
}

void	print_map(t_Map *map_info)
{
	int	i;

	i = 0;
	while (i < map_info->rows)
	{
		write(1, map_info->map[i], map_info->cols);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	draw_square(t_Map *map_info, int size, int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			map_info->map[row + i][col + j] = map_info->full;
			j++;
		}
		i++;
	}
}
