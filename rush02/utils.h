/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:13:23 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/22 15:15:27 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndefFT_UTILS_H
# define FT_UTILS_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_cinstr(char *str);
void	ft_putstr(char *str);
int		ft_is_number(char c);
int		ft_is_spaced(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strchar(char *str, char to_find);
char	*ft_strstr(char *str, char *to_find);
int		ft_valid_input(char *argv);
char	*ft_insrc(char *str, char *to_find);
char	*ft_stread(char *buffer);

#endif
