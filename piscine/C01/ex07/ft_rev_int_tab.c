/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:46:13 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/14 17:15:01 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i = i + 1;
		j = j - 1;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	size;
	int	a[] = {1,2,3,4,5,6,7,8,9};

	size = 9;
	ft_rev_int_tab(a,size);
	i = 0;
	while(i < size)
	{
		printf("%d",a[i]);
		i++;
	}
	return (0);
}*/
