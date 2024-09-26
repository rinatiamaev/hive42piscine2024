/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:06:50 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/23 13:13:49 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mult(int a, int b);
int		ft_mod(int a, int b);
int		ft_isspace(char c);
int		ft_sign(char c);
int		ft_atoi(char *str);
int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mult(int a, int b);
int		ft_mod(int a, int b);
int		ft_get_op(char c);
int		ft_calc(int a, char c, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_do_op(int ac, char **av);

#endif
