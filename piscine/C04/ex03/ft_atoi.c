/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:16:51 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/19 17:06:35 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	end;

	end = 0;
	signal = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] > 10 && str[i] < 14))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		end = end * 10 +(str[i] - '0');
		i++;
	}
	return (end * signal);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/
