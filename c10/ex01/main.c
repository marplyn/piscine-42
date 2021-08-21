/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:00:56 by dground           #+#    #+#             */
/*   Updated: 2021/08/17 12:11:44 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_input(void)
{
	char	buff;
	int		ret;

	ret = read(0, &buff, 1);
	while (ret != 0)
	{
		write(1, &buff, 1);
		ret = read(0, &buff, 1);
	}
}

void	ft_display_file(char *argv[], int i)
{
	char	buff;
	int		ret;
	int		fd;

	fd = open(argv[i], O_RDONLY);
	ret = read(fd, &buff, 1);
	if (fd == -1)
	{
		ft_putstr(argv[0]);
		ft_putstr(": ");
		ft_putstr(argv[i]);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putstr("\n");
	}
	else
	{
		while (ret)
		{
			write(1, &buff, 1);
			ret = read(fd, &buff, 1);
		}
	}
	close(fd);
}

void	ft_cat(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			if (argv[i][0] == '-')
				ft_input();
			else
				ft_display_file(argv, i);
			i++;
		}
	}
	else if (argc == 1)
		ft_input();
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}
