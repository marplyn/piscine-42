/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:32:48 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 18:56:18 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_realloc(char *old, char ch);
int		first_line_checker(char *line);
int		number_1st_line(char *line);
void	map_checker(char **map, char *fline);
void	str_init(char **str);
int		ft_strlen(char *str);
int		nb_1st_line_counter(int n);

char	*get_header(int fd)
{
	char	ch;
	char	*first_line;

	str_init(&first_line);
	while (read(fd, &ch, 1) != 0 && ch != '\n')
		first_line = ft_realloc(first_line, ch);
	return (first_line);
}

typedef struct s_params
{
	int	length;
	int	fd;
	int	is_error;
}	t_params;

void	skip_header(int fd)
{
	char	ch;

	while (read(fd, &ch, 1) != 0 && ch != '\n')
	{
	}
}

char	**get_map(int hight, t_params t, int *is_error)
{
	char	**map;
	int		i;

	skip_header(t.fd);
	map = (char **)malloc(sizeof(char *) * hight);
	i = 0;
	while (i < hight)
	{
		map[i] = (char *)malloc(sizeof(char) * (t.length + 1));
		i++;
	}
	i = 0;
	while (read(t.fd, map[i], t.length + 1) != 0 && hight != i)
	{
		if (map[i][t.length] == '\n')
			map[i][t.length] = '\0';
		else
		{
			*is_error = 1;
			return (map);
		}
		i++;
	}
	return (map);
}

int	get_map_1st_line_length(int fd)
{
	char	ch;
	int		first_line_length;

	first_line_length = 0;
	while (read(fd, &ch, 1) != 0 && ch != '\n')
		first_line_length++;
	return (first_line_length);
}

char	**read_file(char *file_name, char **header, int *is_error)
{
	int			fd;
	char		**map;
	t_params	t;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	*header = get_header(fd);
	if (ft_strlen(*header) - nb_1st_line_counter(number_1st_line(*header)) != 3)
		return (NULL);
	t.length = get_map_1st_line_length(fd);
	close(fd);
	if (fd == -1)
		return (NULL);
	t.fd = open(file_name, O_RDONLY);
	if (t.fd == -1)
		return (NULL);
	*is_error = 0;
	map = get_map(number_1st_line(*header), t, is_error);
	if (is_error)
		return (map);
	close(t.fd);
	if (fd == -1)
		return (NULL);
	return (map);
}
