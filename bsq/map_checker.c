/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:13:36 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 18:35:42 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		number_1st_line(char *line);

int	map_lines_length_checker(char **map, int strs_count)
{
	int	i;
	int	length;

	length = ft_strlen(map[0]);
	i = 0;
	while (i < strs_count)
	{
		if (length != ft_strlen(map[i]))
			return (-1);
		i++;
	}
	return (0);
}

// void	count_pixels_o_init(int *a, int *b)
// {
// 	*a = 0;
// 	*b = 0;
// }

// void	counter_pixels_o(int *count, char map_ij, char *fline)
// {
// 	if (map_ij == fline[ft_strlen(fline) - 2])
// 		*count = *count + 1;
// }

// int	map_checker(char **map, char *fline)
// {
// 	int	i;
// 	int	j;
// 	int	count_pixels_o[2];

// 	count_pixels_o_init(&count_pixels_o[0], &count_pixels_o[1]);
// 	if (map_lines_length_checker(map, number_1st_line(fline)) == -1)
// 		return (-1);
// 	i = 0;
// 	while (i < number_1st_line(fline))
// 	{
// 		j = 0;
// 		while (j < ft_strlen(map[i]))
// 		{
// 			counter_pixels_o(&count_pixels_o[1], map[i][j], fline);
// 			if (map[i][j] != fline[ft_strlen(fline) - 3]
// 				&& map[i][j] != fline[ft_strlen(fline) - 2])
// 				return (-1);
// 			count_pixels_o[0]++;
// 			j++;
// 		}
// 		i++;
// 	}
// 	if (count_pixels_o[0] == count_pixels_o[1])
// 		return (-1);
// 	return (0);
// }

int	map_checker(char **map, char *fline)
{
	int	i;
	int	j;

	if (map_lines_length_checker(map, number_1st_line(fline)) == -1)
		return (-1);
	i = 0;
	while (i < number_1st_line(fline))
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			if (map[i][j] != fline[ft_strlen(fline) - 3]
				&& map[i][j] != fline[ft_strlen(fline) - 2])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
