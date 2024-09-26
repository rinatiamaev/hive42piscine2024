/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:55:39 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/19 10:48:23 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

t_stock_str     *ft_strs_to_tab(int ac, char **av);

char    *ft_strdup(char *src)
{
        char    *dup;
        int             i;

        i = 0;
        dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
        if (!dup)
                return (NULL);
        while (src[i])
        {
                dup[i] = src[i];
                i++;
        }
        dup[i] = '\0';
        return (dup);
}

t_stock_str     *ft_strs_to_tab(int ac, char **av)
{
        int             i;
        t_stock_str     *new;

        i = 0;
        new = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
        if (!new)
                return (NULL);
        while (i < ac)
        {
                new[i].size = ft_strlen(av[i]);
                new[i].str = av[i];
                new[i].copy = ft_strdup(av[i]);
                if (!new[i].copy)
                {
                        while (i > 0)
                        {
                                i--;
                                free(new[i].copy);
                        }
                        free(new);
                        return (NULL);
                }
                i++;
        }
        new[i].str = 0;
        return (new);
}

int	main(int ac, char **av)
{
	int	i;
	t_stock_str	*tab;

	i = 0;
	if (ac > 1)
	{
		tab = ft_strs_to_tab(ac - 1, &av[1]);
		if (!tab)
			return (1);
		ft_show_tab(tab);
	}
	return (0);
}
