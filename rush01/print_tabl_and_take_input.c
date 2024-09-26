/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tabl_and_take_input1.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:49:56 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/15 11:19:23 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 4

void	ft_print_tabl(int tabl[SIZE][SIZE])
{
	int i;
	int j;
	char c;
	
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = tabl[i][j] + '0';
			write(1, &c, 1);
			if (j < SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	char_to_int(char c)
{
	return (c - '0');
}

int	ft_take_input(char *input, int top[], int bottom[], int left[], int right[])
{
	int i = 0;
	int j = 0;
	int value;
       
	while (input[i])
	{
		while (input[i] == ' ')
			i++;
		if (input[i] >= '1' && input[i] <= '4')
		{
			value = char_to_int(input[i]);
			if (j < SIZE)
				top[j] = value;
			else if (j < 2 * SIZE)
				bottom[j - SIZE] = value;
			else if (j < 3 * SIZE)
				left[j - 2 * SIZE] = value;
			else if (j < 4 * SIZE)
				right[j - 3 * SIZE] = value;
			j++;
		}
		else
			return (0);
		i++;
	}
	return (j == 4 * SIZE);
}

int	main(void)
{
	int	tabl[SIZE][SIZE];
	int	top[SIZE];
	int	bottom[SIZE];
	int	left[SIZE];
	int	right[SIZE];
	char	input[31] = "1 2 3 4 4 3 2 1 2 1 4 3 3 4 1 2";
	int	i;
	int	j;

	i = 0;
	if (ft_take_input(input, top, bottom, left, right))
	{
		while (i < SIZE)
		{
			j = 0;
			while (j < SIZE)
			{
                		tabl[i][j] = 1; // Dummy initialization
				j++;
			}
			i++;
		}
		ft_print_tabl(tabl);
	}
	else
	{
		write(2, "invalid input\n", 14);
		return (1);
	}
	return (0);
}
