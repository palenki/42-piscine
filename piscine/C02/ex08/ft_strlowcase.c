/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:06:12 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/18 09:59:07 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <unistd.h>
int	main(void)
{
	char	a[] = "HELP FIRE!";
	int	i;
	
	ft_strlowcase(a);
	
	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}*/
