/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:04:25 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/24 14:53:39 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_int_cmp(int a, int b)
{
	return (a - b);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = 0;
	ascending = 1;
	descending = 1;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			ascending = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			descending = 0;
		i++;
	}
	return (ascending || descending);
}

int	main(void)
{
	int arr1[] = {1, 5, 42, 21, 0, 1337, 10000000, 8};
	int arr2[] = {1, 2, 3, 4, 5, 6};
	int arr3[] = {11, 10, 8, 7, 7, 6};
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int length2 = sizeof(arr2) / sizeof(arr2[0]);
	int length3 = sizeof(arr3) / sizeof(arr3[0]);
	printf("%d\n", ft_is_sort(arr1, length1, ft_int_cmp));
	printf("%d\n", ft_is_sort(arr2, length2, ft_int_cmp));
	printf("%d\n", ft_is_sort(arr3, length3, ft_int_cmp));
	return (0);
}
