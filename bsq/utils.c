/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:21:41 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 16:26:24 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

void	str_init(char **str)
{
	*str = malloc(sizeof(char));
	*str[0] = '\0';
}

int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	return (n * (-1));
}

int	get_map_length(char **map)
{
	return (ft_strlen(map[0]));
}

void	map_first_line_init(char ***map, char **first_line)
{
	*map = NULL;
	*first_line = NULL;
}
