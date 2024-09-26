/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:07:52 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/12 12:14:03 by riamaev          ###   ########.fr       */
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

int	ft_recursive_factorial(int nb)
{
        if (nb < 0)
                return (0);
        if (nb == 0 || nb == 1)
                return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

int	main(void)
{
	int	n;
	n = 9;
	ft_putnbr(ft_recursive_factorial(n));
	return (0);
}