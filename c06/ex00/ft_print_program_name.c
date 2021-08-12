/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:44:13 by dground           #+#    #+#             */
/*   Updated: 2021/08/11 12:55:53 by dground          ###   ########.fr       */
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

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i] != '\0')
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return (0);
}
