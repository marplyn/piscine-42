/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:05:06 by dground           #+#    #+#             */
/*   Updated: 2021/08/18 11:22:18 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	space(char str)
{
	if ((str == ' ') || (str == '\t') || (str == '\r'))
		return (1);
	else if ((str == '\v') || (str == '\n') || (str == '\f'))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	k;

	result = 0;
	k = 0;
	while (space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			k++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (int)*str - '0';
		str++;
	}
	if (k % 2 == 1)
		return (result * (-1));
	else
		return (result);
}
