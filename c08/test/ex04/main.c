/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:51:16 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/18 09:39:49 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

t_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac > 1)
	{
		t_stock_str *new_str = ft_strs_to_tab(ac - 1, &av[1]);
		if (new_str)
		{
                        while (i < ac - 1)
                        {
                                printf("%d\n", new_str[i].size);
                                i++;
                        }
			i = 0;
			while (i < ac - 1)
			{
				printf("%s\n", new_str[i].str);
				i++;
			}
			i = 0;
			while (i < ac - 1)
			{
				printf("%s\n", new_str[i].copy);
				i++;
			}
			i = 0;
			while (i < ac - 1)
			{
				free(new_str[i].copy);
				i++;
			}
			free(new_str);
		}
	}
	return (0);
}
