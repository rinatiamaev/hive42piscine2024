/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:44:31 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/16 14:25:31 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strs_and_sep_len(int size, char **strs, const char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		len = len + (size - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, const char *sep)
{
	int		len;
	int		i;
	char	*res_str;

	i = 0;
	if (size == 0)
	{
		res_str = (char *)malloc(sizeof(char));
		if (res_str)
			res_str[0] = '\0';
		return (res_str);
	}
	len = ft_strs_and_sep_len(size, strs, sep);
	res_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!res_str)
		return (NULL);
	res_str[0] = '\0';
	while (i < size)
	{
		res_str = ft_strcat(res_str, strs[i]);
		if (i < size - 1)
			res_str = ft_strcat(res_str, sep);
		i++;
	}
	return (res_str);
}
