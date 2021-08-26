/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleans.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:07:52 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 18:54:30 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		number_1st_line(char *line);

// int	to;
// (void) lines_done;
// to = lines_done + 1;
// if (is_error)
// 	to += 2;
// if (number_1st_line(first_line) < to)
// 	to = number_1st_line(first_line);

void	free_map(char **map, char *first_line, int is_error)
{
	int	i;

	(void) is_error;
	i = 0;
	if (map != NULL)
	{
		while (i < number_1st_line(first_line))
		{
			free(map[i]);
			i++;
		}
		free(map);
	}
	if (first_line != NULL)
		free(first_line);
}

void	free_cash(int **cash, int hight)
{
	int	i;

	i = 0;
	if (cash != NULL)
	{
		while (i < hight)
		{
			free(cash[i]);
			i++;
		}
		free(cash);
	}
}
