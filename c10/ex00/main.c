/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:56:17 by dground           #+#    #+#             */
/*   Updated: 2021/08/16 18:30:48 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int	ft_display_file(int fd)
{
	char	buff;
	int		ret;

	ret = read(fd, &buff, 1);
	while (ret != 0)
	{
		if (ret == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (1);
		}
		write(1, &buff, 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		ft_display_file(fd);
		close(fd);
	}
	return (0);
}
