/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:05:35 by dground           #+#    #+#             */
/*   Updated: 2021/08/18 11:22:57 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_do_op(int agrc, char **argv);
int		check_error(char op, int y);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_do_op(argc, argv);
	}
	return (0);
}
