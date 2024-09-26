/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:43:01 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/23 11:24:40 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] != '\0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char *tab[] = {"HIVE", "42", "1337", "", "21", ""};
	int length = sizeof(tab) / sizeof(tab[0]);
	int count = ft_count_if(tab, length, ft_is_empty);
	printf("%d\n", count);
	return (0);
}
