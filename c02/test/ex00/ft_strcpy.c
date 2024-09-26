/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:37:43 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/06 09:59:31 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[12];
	char	*destcpy;

	src = "Hello HIVE!";
	write(1, "dest before: ", 13);
	ft_putstr(dest);
	write(1, "\n", 1);
	destcpy = ft_strcpy(dest, src);
	write(1, "dest after cpy: ", 16);
	ft_putstr(destcpy);
	return (0);
}
