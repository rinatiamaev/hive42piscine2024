/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:35:12 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/23 21:57:54 by izhairguns       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_do_op(int ac, char **av)
{
	int	res;

	if (ac == 4)
	{
		res = ft_calc(ft_atoi(av[1]), av[2][0], ft_atoi(av[3]));
		if (res != -1)
			ft_putnbr(res);
		ft_putchar('\n');
	}
}
