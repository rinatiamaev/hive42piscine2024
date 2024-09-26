/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfokin <alfokin@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:50:05 by alfokin           #+#    #+#             */
/*   Updated: 2024/09/21 13:44:49 by alfokin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>

void	ft_print(char *end)
{
	char *begin;
	char *finish;

	begin = ft_cinstr(end);
	finish = ft_strchar(begin, '\n');
	while (begin < finish)
		ft_putchar(*begin++);
	ft_putchar('\n');
}

void	ft_stdin(int fd, char *indict)
{
	char	*buffer;
	char	*end;
	int		i;

	i = 0;
	buffer = 0;
	if (!(indict = (char *)malloc(20000)))
		return ;
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	while ((read(fd, &indict[i], 1)))
		i++;
	if (close(fd) == -1)
	{
		ft_putstr("Close Error\n");
		return ;
	}
	if (((end = ft_insrc(indict, ft_stread(buffer)))) == 0)
		return ;
	ft_print(end);
}

void	ft_alt_start(char *argv, int fd, char *indict)
{
	char	*end;
	int		i;

	i = 0;
	if (!(indict = (char *)malloc(2000)))
		return ;
	if ((fd = open(&argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	while ((read(fd, &indict[i], 1)))
		i++;
	if (close(fd) == -1)
	{
		ft_putstr("Close Error\n");
		return ;
	}
	if (((end = ft_strstr(indict, argv))) == 0)
		return ;
	ft_print(end);
}

void	ft_start(char *argv, int fd, char *indict)
{
	char	*end;
	int		i;

	i = 0;
	if (!(indict = (char *)malloc(2000)))
		return ;
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	while ((read(fd, &indict[i], 1)))
		i++;
	if (close(fd) == -1)
	{
		ft_putstr("Close Error\n");
		return ;
	}
	if (((end = ft_strstr(indict, argv))) == 0)
		return ;
	ft_print(end);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*indict;

	fd = 0;
	indict = 0;
	if (argc > 3)
		ft_putstr("Too many arguments\n");
	else if (argc == 2)
	{
		if (ft_valid_input(argv[1]))
			ft_start(argv[1], fd, indict);
		else
			ft_putstr("Invalid argument\n");
	}
	else if (argc == 3)
	{
		if (ft_valid_input(argv[2]))
			ft_alt_start(argv[2], fd, indict);
		else
			ft_putstr("Invalid argument\n");
	}
	else
		ft_stdin(fd, indict);
	free(indict);
}
