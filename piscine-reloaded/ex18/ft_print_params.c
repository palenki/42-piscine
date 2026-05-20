/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:41:40 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/05/18 16:54:46 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	size;

	i = 1;
	while (i < argc)
	{
		size = 0;
		while (argv[i][size] != '\0')
		{
			ft_putchar(argv[i][size]);
			size++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
