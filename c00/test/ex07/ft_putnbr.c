/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:45:23 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/04 17:51:35 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = -2147483648;
	b = -10;
	c = 0;
	d = 100;
	write(1, "a = ", 4);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "b = ", 4);
	ft_putnbr(b);
	write(1, "\n", 1);
	write(1, "c = ", 4);
	ft_putnbr(c);
	write(1, "\n", 1);
	write(1, "d = ", 4);
	ft_putnbr(d);
	write(1, "\n", 1);
}
