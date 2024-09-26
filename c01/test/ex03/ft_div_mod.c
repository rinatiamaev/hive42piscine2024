/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:41:50 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/05 14:53:24 by riamaev          ###   ########.fr       */
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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 23;
	b = 2;
	div = 0;
	mod = 0;
	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_putnbr(div);
	write(1, "\n", 1);
	ft_putnbr(mod);
	write(1, "\n", 1);
	ft_div_mod(a, b, &div, &mod);
        ft_putnbr(a);
        write(1, "\n", 1);
        ft_putnbr(b);
        write(1, "\n", 1);
        ft_putnbr(div);
        write(1, "\n", 1);
        ft_putnbr(mod);
        write(1, "\n", 1);
	return (0);
}
