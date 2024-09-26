/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:51:26 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/12 09:33:15 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		if ((unsigned int)nbr >= (unsigned int)(base_len))
			ft_putnbr_base(((unsigned int)(-nbr) / base_len), base);
		ft_putchar(base[(nbr % base_len)]);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= base_len)
			ft_putnbr_base(nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
	}
}

int	main(void)
{
        int a = -2147483648;
        int b = -255;
        int c = 0;
	int d = 55;
        char base02[2] = "01";
        char base16[16] = "0123456789abcdef";
        char base08[8] = "poneyvif";
        ft_putnbr_base(a, base16);
	write(1, "\n", 1);
	ft_putnbr_base(b, base16);
	write(1, "\n", 1);
	ft_putnbr_base(c, base08);
	write(1, "\n", 1);
	ft_putnbr_base(d, base08);
	write(1, "\n", 1);
        return (0);
}
