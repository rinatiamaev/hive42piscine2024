/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:24:34 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/05 14:40:01 by riamaev          ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 1000;
	write(1, "a before = ", 11);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "b before = ", 11);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, "a after = ", 10);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "b after = ", 10);
	ft_putnbr(b);
	write(1, "\n", 1);
	return (0);
}
