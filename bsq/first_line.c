/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:21:32 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 19:12:47 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		is_digit(char c);
int		is_printable(char c);

int	nb_1st_line_counter(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	number_1st_line(char *line)
{
	int	i;
	int	number;

	number = 0;
	i = 0;
	while (i < ft_strlen(line) - 3)
	{
		if (!is_digit(line[i]))
			return (-1);
		number = number * 10 + line[i] - '0';
		i++;
	}
	return (number);
}

int	oef_check(char obstacle, char empty, char full)
{
	int	is_error;

	is_error = 0;
	if (empty == obstacle)
		is_error = 1;
	else if (empty == full)
		is_error = 1;
	else if (obstacle == full)
		is_error = 1;
	if (is_error == 1)
		return (-1);
	return (0);
}

void	map_e_o_f_init(char *a, char *b, char *c, char *line)
{
	*a = line[ft_strlen(line) - 3];
	*b = line[ft_strlen(line) - 2];
	*c = line[ft_strlen(line) - 1];
}

int	first_line_checker(char *line)
{
	int		i;
	char	map_e_o_f[3];

	if (ft_strlen(line) < 4)
		return (-1);
	i = 0;
	while (i < ft_strlen(line) - 3)
	{
		if (!is_digit(line[i]))
			return (-1);
		i++;
	}
	while (i < ft_strlen(line))
	{
		if (!is_printable(line[i]))
			return (-1);
		i++;
	}
	if (number_1st_line(line) == 0 || number_1st_line(line) == -1)
		return (-1);
	map_e_o_f_init(&map_e_o_f[0], &map_e_o_f[1], &map_e_o_f[2], line);
	if (oef_check(map_e_o_f[0], map_e_o_f[1], map_e_o_f[2]) == -1)
		return (-1);
	return (0);
}
