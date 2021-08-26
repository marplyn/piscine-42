/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_empty_obstacle_full.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:13:35 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 14:56:31 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	get_map_empty(char *first_line)
{
	return (first_line[ft_strlen(first_line) - 3]);
}

char	get_map_obstacle(char *first_line)
{
	return (first_line[ft_strlen(first_line) - 2]);
}

char	get_map_full(char *first_line)
{
	return (first_line[ft_strlen(first_line) - 1]);
}
