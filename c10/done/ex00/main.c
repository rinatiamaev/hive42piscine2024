/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:21:54 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/24 17:09:32 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF	2000

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_display_stdin(int fd)
{
	char	buffer[BUFF + 1];
	int		nb_char;

	while (nb_char = read(fd, buffer, BUFF))
		write(1, buffer, nb_char);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	file;

	if(ac == 2)
	{
		if (ft_strcmp(av[1], ".") == 0 || ft_strcmp(av[1], "/") == 0
			|| ft_strcmp(av[1], "..") == 0 || ft_strcmp(av[1], "./") == 0
			|| ft_strcmp(av[1], "../") == 0)
		{
			write(1, "Is a directoty.\n", 16);
			return (1);
		}
		if ((file = open(av[1], O_RDONLY)) == -1 )
			return ()
	}
}
