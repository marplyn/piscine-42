/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:13:35 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 16:28:20 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		number_1st_line(char *line);
int		get_map_length(char **map);
void	print_result(char **map, char *first_line, int cashmax, int *mij);
char	get_map_obstacle(char *first_line);
void	free_cash(int **cash, int hight);

int	get_min_of_3(int **cash, int i, int j)
{
	int	min_of_3;

	min_of_3 = 2147483647;
	if (cash[i][j - 1] < min_of_3)
		min_of_3 = cash[i][j - 1];
	if (cash[i - 1][j - 1] < min_of_3)
		min_of_3 = cash[i - 1][j - 1];
	if (cash[i - 1][j] < min_of_3)
		min_of_3 = cash[i - 1][j];
	return (min_of_3);
}

int	get_cash_max(int *cash_max, int cash)
{
	if (*cash_max < cash)
	{
		*cash_max = cash;
		return (1);
	}
	return (0);
}

typedef struct s_ij
{
	int	i;
	int	j;
}	t_ij;

void	if_i_j_is_0(char **map, int **cash, char *first_line, t_ij v)
{
	if (v.i == 0 || v.j == 0)
	{
		if (map[v.i][v.j] == get_map_obstacle(first_line))
			cash[v.i][v.j] = 0;
		else
			cash[v.i][v.j] = 1;
	}
	else
	{
		if (map[v.i][v.j] == get_map_obstacle(first_line))
			cash[v.i][v.j] = 0;
		else
			cash[v.i][v.j] = get_min_of_3(cash, v.i, v.j) + 1;
	}
}

void	get_cash_max_index(int *max_i, int *max_j, t_ij v)
{
	*max_i = v.i;
	*max_j = v.j;
}

void	solver(char **map, char *first_line)
{
	int		**cash;
	t_ij	v;
	int		cash_max;
	int		max_index[2];

	cash = (int **)malloc(sizeof(int *) * number_1st_line(first_line));
	v.i = -1;
	while (++v.i < number_1st_line(first_line))
		cash[v.i] = (int *)malloc(sizeof(int) * get_map_length(map));
	cash_max = 0;
	v.i = -1;
	while (++v.i < number_1st_line(first_line))
	{
		v.j = -1;
		while (++v.j < get_map_length(map))
		{
			if_i_j_is_0(map, cash, first_line, v);
			if (get_cash_max(&cash_max, cash[v.i][v.j]))
				get_cash_max_index(&max_index[0], &max_index[1], v);
		}
	}
	print_result(map, first_line, cash_max, max_index);
	free_cash(cash, number_1st_line(first_line));
}
