/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:15:48 by dground           #+#    #+#             */
/*   Updated: 2021/08/10 13:16:40 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 0)
	{
		while (power != 0)
		{
			result *= nb;
			--power;
		}
		return (result);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
