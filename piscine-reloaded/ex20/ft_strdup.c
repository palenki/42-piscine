/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 08:06:15 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/05/21 11:56:12 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = ft_strlen(src) + 1;
	str = malloc(len * sizeof (char));
	ft_strcpy(str, src);
	return (str);
}

/*int	main(int argc, char **argv)
{
	char	*str;

	if (argc < 2)
	{
		printf("Digite um argumento.\n");
		return (1);
	}
	str = ft_strdup(argv[1]);
	printf("%s", str);
	return (0);
}*/
