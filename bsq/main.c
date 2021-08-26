/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:10:10 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 19:08:13 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define TEMP_FILE_NAME "map.temp"

void	read_console(char *file_name);
char	**read_file(char *file_name, char **header, int *is_error);
void	ft_putstr_error(char *str);
int		data_handle(char **map, char *first_line, int is_error);
void	ft_putchar(char c);
void	free_map(char **map, char *first_line, int is_error);
void	map_first_line_init(char ***map, char **first_line);

void	free_map_and_error_msg(char **map, char *first_line, int is_error)
{
	free_map(map, first_line, is_error);
	ft_putstr_error("map error\n");
}

void	if_data_handle_is_negative_1(char **map, char *first_line, int is_error)
{
	if (data_handle(map, first_line, is_error) == -1)
		free_map_and_error_msg(map, first_line, is_error);
}

void	do_main(char **map, char *first_line, int is_error)
{
	if (map == NULL || first_line == NULL)
		is_error = 1;
	if (!is_error)
		if_data_handle_is_negative_1(map, first_line, is_error);
	else
		free_map_and_error_msg(map, first_line, is_error);
}

void	put_newline(int i, int argc)
{
	if (i < argc - 1)
		ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int		i;
	char	*first_line;
	char	**map;
	int		is_error;

	map_first_line_init(&map, &first_line);
	if (argc == 1)
	{
		read_console(TEMP_FILE_NAME);
		map = read_file(TEMP_FILE_NAME, &first_line, &is_error);
		do_main(map, first_line, is_error);
	}
	else if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			map = read_file(argv[i], &first_line, &is_error);
			do_main(map, first_line, is_error);
			put_newline(i, argc);
		}
	}
}
