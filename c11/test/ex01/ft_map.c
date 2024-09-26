/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:23:21 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/23 11:25:50 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int	ft_add_num(int a)
{
	int res;

	res = a + 5;
	return (res);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	if (!res)
		return (NULL);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int *res;
	int length = 5;
	int i = 0;
	res = ft_map(arr, length, ft_add_num);
	while (i < length)
	{
		ft_putnbr(res[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
