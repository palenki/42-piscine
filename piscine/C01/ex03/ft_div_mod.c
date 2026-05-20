/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:23:22 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/14 16:50:33 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	div;
	int	rest;

	ft_div_mod(16, 5, &div, &rest);
	printf("Resultado da divisão sem casas decimais: %d\n", div);
	printf("Resto da divisão: %d", rest);
	return (0);
}*/
