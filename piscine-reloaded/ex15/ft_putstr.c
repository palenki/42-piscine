/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:06:29 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/05/18 14:30:17 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>*/
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Eu gosto de abacaxi!";
	ft_putstr(str);
	return (0);
}*/
