/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:37:15 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/24 09:42:13 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_arr_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_arrlen(char **arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int len;
	
	i = 0;
	len = ft_arrlen(tab);
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_arr_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int i = 0;
	char	*tab[] = {"MERS", "TOYOTA", "BMW", "TESLA", "LADA", NULL};
	printf("Before sorting:\n");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	ft_sort_string_tab(tab);
	printf("After sorting:\n");
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
