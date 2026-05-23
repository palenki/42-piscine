/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:11:42 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/05/23 13:26:42 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	(*point).x = 42;
	(*point).y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("%d", point.y);
	return (0);
}
