/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:31:32 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/09 11:22:52 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char not_print)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[not_print / 16]);
	ft_putchar(hex[not_print % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int		i;
	unsigned char		c;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c == 127 || (c <= 31))
		{
			ft_putchar('\\');
			ft_print_hex(c);
		}
		else
			ft_putchar(c);
		i++;
	}
}
