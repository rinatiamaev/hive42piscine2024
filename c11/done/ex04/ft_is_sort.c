/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:04:25 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/24 14:48:23 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
