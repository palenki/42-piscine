/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 09:28:55 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/03/18 09:52:27 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_is_alphanumeric(char str)
{
	if (!(str > 96 && str < 123) && !(str > 64 && str < 91)
		&& !(str > 47 && str < 58))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (ft_is_alphanumeric(str [i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <unistd.h>
int	main(void)
{
	int	i;
	char	a[] = "hi, hOw are you? 42words forty-two; fifty+and+one";
	char	b[] = "123shell maracuja azedo";
	
	i = 0;
	ft_strcapitalize(a);
	ft_strcapitalize(b);
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}*/
