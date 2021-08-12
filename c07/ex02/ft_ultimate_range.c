/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:46:04 by dground           #+#    #+#             */
/*   Updated: 2021/08/12 18:53:40 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	temp = (int *)malloc(sizeof (int) * (max - min));
	if (min >= max)
		return (0);
	if (temp == ((void *)0))
		return (-1);
	while (min < max)
		temp[i++] = min++;
	*range = temp;
	return (i);
}
