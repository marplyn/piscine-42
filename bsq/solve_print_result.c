/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_print_result.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:57:50 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 15:00:59 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_print_result_vars
{
	int	corner_found;
	int	temp;
	int	i;
	int	j;
}	t_print_result_vars;

void	ft_putchar(char c);
int		number_1st_line(char *line);
int		get_map_length(char **map);
int		ft_abs(int n);
char	get_map_full(char *first_line);

void	print_result(char **map, char *first_line, int cashmax, int *mij)
{
	t_print_result_vars	v;

	v.corner_found = 0;
	v.temp = cashmax;
	v.i = -1;
	while (++v.i < number_1st_line(first_line))
	{
		v.j = -1;
		while (++v.j < get_map_length(map))
		{
			if (mij[0] - (cashmax - 1) == v.i && mij[1] - (cashmax - 1) == v.j)
				v.corner_found = 1;
			if (v.corner_found && (ft_abs(mij[0] - v.i) < cashmax
					&& ft_abs(mij[1] - v.j) < cashmax)
				    && v.temp > 0 && (mij[0] >= v.i))
			{
				v.temp--;
				ft_putchar(get_map_full(first_line));
			}
			else
				ft_putchar(map[v.i][v.j]);
		}
		v.temp = cashmax;
		ft_putchar('\n');
	}
}
