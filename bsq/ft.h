/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:28:55 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/25 19:41:39 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_map
{
	int		rows;
	int		cols;
	char	**map;
	char	full;
	char	empty;
}		t_Map;

typedef struct s_max_info
{
	int	size;
	int	row;
	int	col;
}		t_max_info;

void	update_max_info(int **dp, t_max_info *max_info, int i, int j);
void	update_dp_and_find_max(t_Map *map_info, int **dp, t_max_info *max_info);
void	update_dp_table(int **dp, int i, int j);
int		ft_isspace(char c);
int		ft_sign(char c);
int		ft_atoi(char *str);
int		ft_strlen(const char *str);
void	ft_putstr(const char *str);
void	ft_memset(void *ptr, int value, unsigned int num);
void	free_map(t_Map *map_info);
int		**initialize_dp(int rows, int cols);
void	print_map(t_Map *map_info);
void	draw_square(t_Map *map_info, int size, int row, int col);
int		min_of_three(int a, int b, int c);
void	find_largest_square(t_Map *map_info);
int		read_line(int fd, char *buffer, int size);
int		parse_map(const char *filename, t_Map *map_info);

#endif
