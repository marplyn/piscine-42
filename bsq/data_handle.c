/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:40:44 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 18:15:12 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		first_line_checker(char *line);
int		map_checker(char **map, char *fline);
void	solver(char **map, char *first_line);
void	free_map(char **map, char *first_line, int is_error);

int	data_handle(char **map, char *first_line, int is_error)
{
	if (first_line_checker(first_line) == -1)
		return (-1);
	if (map_checker(map, first_line) == -1)
		return (-1);
	solver(map, first_line);
	free_map(map, first_line, is_error);
	return (0);
}
