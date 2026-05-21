/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:23:30 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/05/21 18:39:00 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
		return (NULL);
	i = max - min;
	num = malloc(i * sizeof (int));
	i = 0;
	while (min < max)
	{
		num [i] = min;
		min++;
		i++;
	}
	return (num);
}

/*int	main(void)
{
	int	*str;

	str = ft_range(5, 10);
	if(str != NULL)
	{
		while (*str)
			printf("%d",*str++);
	}
	return (0);
}*/
