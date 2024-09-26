/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:48:45 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/23 13:57:53 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_sum(int a, int b);
int	ft_sub(int a, int b);
int	ft_div(int a, int b);
int	ft_mult(int a, int b);
int	ft_mod(int a, int b);

int	ft_get_op(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '/')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '%')
		return (4);
	else
		return (5);
}

int	ft_calc(int a, char c, int b)
{
	int		(*op[5])(int, int);
	int		temp;

	op[0] = ft_sum;
	op[1] = ft_sub;
	op[2] = ft_div;
	op[3] = ft_mult;
	op[4] = ft_mod;
	temp = ft_get_op(c);
	if (temp == 5)
		return (0);
	else
		return (op[temp](a, b));
}
