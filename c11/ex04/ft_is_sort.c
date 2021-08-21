/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:14:48 by dground           #+#    #+#             */
/*   Updated: 2021/08/18 19:33:27 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	max;
	int	min;

	i = 0;
	max = 0;
	min = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			max++;
		if (f(tab[i], tab[i + 1]) >= 0)
			min++;
		i++;
	}
	if (min == i || max == i)
		return (1);
	return (0);
}
