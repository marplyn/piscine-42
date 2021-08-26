/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_console_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:18:13 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 19:23:21 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_realloc(char *old, char ch);
int		number_1st_line(char *line);
void	str_init(char **str);

void	read_console(char *file_name)
{
	char	ch;
	int		fd;
	int		line_count;
	char	*header;

	str_init(&header);
	fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	line_count = 0;
	while (read(1, &ch, 1) != 0)
	{
		if (line_count == 0)
			header = ft_realloc(header, ch);
		if (ch == '\n')
		{
			line_count++;
			if (line_count == 1)
				free(header);
		}
		write(fd, &ch, 1);
	}
	close(fd);
}
