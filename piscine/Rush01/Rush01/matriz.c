/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 08:00:16 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/08 12:28:35 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_matrix[4][4];

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_matrix(void)
{
	int	row;

	int	cow;

	row = 0;
	while(row < 4)
	{
		cow = 0;
		while(cow <4)
		{
			ft_putchar(g_matrix[row][cow]+ '0');
			cow = cow + 1;
		}
	ft_putchar('\n');
	row = row + 1;
	}
}

int	main(void)
{
	ft_matrix();
	return (0);
}
