/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:39:34 by riamaev           #+#    #+#             */
/*   Updated: 2024/09/17 11:35:38 by riamaev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_POINT_H
# define	FT_POINT_H

typedef struct	s_point
{
	int	x;
	int	y;
}		t_point;

void	set_point(t_point *point);

#endif
