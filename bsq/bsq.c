/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:58:28 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/25 17:23:08 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	t_Map	map_info;
	int		i;

	if (ac < 2)
	{
		ft_putstr("Usage: <program> <map_file>\n");
		exit(1);
	}
	i = 1;
	while (i < ac)
	{
		if (parse_map(av[i], &map_info) == -1)
			ft_putstr("Error reading map file.\n");
		else
		{
			find_largest_square(&map_info);
			print_map(&map_info);
			free_map(&map_info);
		}
		i++;
	}
	return (0);
}
