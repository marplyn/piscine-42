/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:47:21 by dground           #+#    #+#             */
/*   Updated: 2021/08/17 18:20:05 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);
int		addition(int x, int y);
int		substraction(int x, int y);
int		division(int x, int y);
int		multiplication(int x, int y);
int		modulus(int x, int y);

int	define_operator(char op)
{
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '/')
		return (2);
	if (op == '*')
		return (3);
	if (op == '%')
		return (4);
	else
		return (5);
}

int	ft_calc(int x, char op, int y)
{
	int	(*opfunctions[5])(int x, int y);
	int	ret;

	opfunctions[0] = addition;
	opfunctions[1] = substraction;
	opfunctions[2] = division;
	opfunctions[3] = multiplication;
	opfunctions[4] = modulus;
	ret = define_operator(op);
	if (ret == 5)
		return (0);
	return ((*opfunctions[ret])(x, y));
}

int	check_error(char op, int y)
{
	if (op == '/' && y == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == '%' && y == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}
