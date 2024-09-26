/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:41:43 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/25 17:41:58 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	min_of_three(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

int	read_line(int fd, char *buffer, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size - 1)
	{
		if (read(fd, &c, 1) <= 0)
			break ;
		if (c == '\n')
			break ;
		buffer[i++] = c;
	}
	buffer[i] = '\0';
	return (i);
}

int	parse_map(const char *filename, t_Map *map_info)
{
	int		fd;
	int		i;
	char	header[20];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	read_line(fd, header, sizeof(header));
	map_info->rows = ft_atoi(header);
	map_info->full = 'x';
	map_info->empty = '.';
	map_info->map = malloc(map_info->rows * sizeof(char *));
	i = 0;
	while (i < map_info->rows)
	{
		map_info->map[i] = malloc(1024 * sizeof(char));
		read_line(fd, map_info->map[i], 1024);
		map_info->cols = ft_strlen(map_info->map[i]);
		i++;
	}
	close(fd);
	return (0);
}
