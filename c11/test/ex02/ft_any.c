/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:38:59 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/24 14:50:51 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *arr1[] = {"Hoo", "Loo", "123", "HIVE", 0 };
	char *arr2[] = {"Hoo", "Loo", "abc", "HIVE", 0 };
	printf("%d\n", ft_any(arr1, ft_check_char));
	printf("%d\n", ft_any(arr2, ft_check_char));
	return (0);
}
