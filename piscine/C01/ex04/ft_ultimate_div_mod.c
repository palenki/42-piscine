/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:31:16 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/14 16:53:34 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*#include <stdio.h>
int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 11;
	nbr2 = 2;
	printf("valor de nbr1 = %d\n", nbr1);
	printf("valor de nbr2 = %d\n", nbr2);
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("resultado da divisão sem casas decimais = %d\n", nbr1);
	printf("resto da divisão = %d", nbr2);
	return (0);
}*/
