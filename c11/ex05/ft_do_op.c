/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:09:27 by dground           #+#    #+#             */
/*   Updated: 2021/08/18 11:22:41 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		check_error(char op, int y);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_calc(int x, char op, int y);
void	ft_putchar(char c);

void	ft_do_op(int argc, char **argv)
{
	if (argv[2][1] == '\0')
	{
		if ((argc == 4) && (check_error(argv[2][0], ft_atoi(argv[3]))))
		{
			ft_putnbr(ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3])));
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
}
