/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:16:21 by dground           #+#    #+#             */
/*   Updated: 2021/08/11 13:22:34 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			k = 0;
			while (argv[i][j] != '\0')
				ft_putchar(argv[i][k++]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
