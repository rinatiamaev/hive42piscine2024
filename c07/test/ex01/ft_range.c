/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:46:10 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/17 11:05:31 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int	main(void)
{
	int min = 1;
	int max = 14;
	int *arr = ft_range(min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free (arr);
	return (0);
}
