/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:46:55 by dground           #+#    #+#             */
/*   Updated: 2021/08/12 17:46:57 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = min;
	if (min >= max)
		return (NULL);
	range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[min - i] = min;
		min++;
	}
	return (range);
}
