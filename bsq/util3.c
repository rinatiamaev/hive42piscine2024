/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:07:56 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/25 20:04:02 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	update_dp_table(int **dp, int i, int j)
{
	int	min_neighbor;

	if (i == 0 || j == 0)
		dp[i][j] = 1;
	else
	{
		min_neighbor = min_of_three(dp[i - 1][j],
				dp[i][j - 1], dp[i - 1][j - 1]);
		dp[i][j] = 1 + min_neighbor;
	}
}

void	update_max_info(int **dp, t_max_info *max_info, int i, int j)
{
	if (dp[i][j] > max_info->size)
	{
		max_info->size = dp[i][j];
		max_info->row = i;
		max_info->col = j;
	}
}

void	update_dp_and_find_max(t_Map *map_info, int **dp, t_max_info *max_info)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_info->rows)
	{
		j = 0;
		while (j < map_info->cols)
		{
			if (map_info->map[i][j] == map_info->empty)
			{
				update_dp_table(dp, i, j);
				update_max_info(dp, max_info, i, j);
			}
			j++;
		}
		i++;
	}
}

void	find_largest_square(t_Map *map_info)
{
	int			**dp;
	t_max_info	max_info;
	int			i;

	dp = initialize_dp(map_info->rows, map_info->cols);
	max_info.size = 0;
	max_info.row = 0;
	max_info.col = 0;
	update_dp_and_find_max(map_info, dp, &max_info);
	if (max_info.size > 0)
	{
		draw_square(map_info, max_info.size,
			max_info.row - max_info.size + 1,
			max_info.col - max_info.size + 1);
	}
	else
		ft_putstr("No square found.\n");
	i = 0;
	while (i < map_info->rows)
		free(dp[i++]);
	free(dp);
}
