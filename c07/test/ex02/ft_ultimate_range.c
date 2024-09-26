/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:27:03 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/17 11:08:11 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

int	main(void)
{
	int i = 0;
	int min = 90;
	int max = 152;
	int *range;
	int size = ft_ultimate_range(&range, min, max);
	printf("%d\n", size);
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
