/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:27:01 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/09 10:40:17 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
/*
int	ft_is_alpha_or_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (ft_is_alpha_or_num(str[i]))
		{
			if (flag && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 'a' + 'A';
			else if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] - 'A' + 'a';
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}*/

int     ft_is_alpha_or_num(char c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
                || (c >= '0' && c <= '9'))
                return (1);
        return (0);
}

char    *ft_strcapitalize(char *str)
{
        int     i;
        int     flag;

        i = 0;
        flag = 1;
        while (str[i])
        {
                if (ft_is_alpha_or_num(str[i]))
                {
                        if (flag && (str[i] >= 'a' && str[i] <= 'z'))
                                str[i] = str[i] - 'a' + 'A';
                        else if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
                                str[i] = str[i] - 'A' + 'a';
                        flag = 0;
                }
                else
                        flag = 1;
                i++;
        }
        return (str);
}


int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_putstr(ft_strcapitalize(str));
	return (0);
}
