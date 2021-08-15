/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:28:05 by dground           #+#    #+#             */
/*   Updated: 2021/08/08 15:04:36 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	upperline(int m, int x)
{
	if (m == 1 || m == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	middleline(int m, int x)
{
	if (m == 1 || m == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	lowerline(int m, int x)
{
	if (m == 1 || m == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	m;
	int	n;

	n = 1;
	while (n <= y)
	{
		m = 1;
		while (m <= x)
		{
			if (n == 1)
				upperline(m, x);
			else if (n == y)
				lowerline(m, x);
			else
				middleline(m, x);
			m++;
		}
		if (x != 0)
			ft_putchar('\n');
		n++;
	}
}
