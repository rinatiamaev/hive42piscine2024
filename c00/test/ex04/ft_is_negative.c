/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:05:39 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/05 16:44:15 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 5;
	b = 0;
	c = -100;
	write(1, "a = 5 ", 6);
	ft_is_negative(a);
	write(1, "\n", 1);
	write(1, "b = 0 ", 6);
	ft_is_negative(b);
	write(1, "\n", 1);
	write(1, "c = -100 ", 9);
	ft_is_negative(c);
	write(1, "\n", 1);
}
