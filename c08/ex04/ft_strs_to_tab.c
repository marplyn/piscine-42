/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:27:25 by dground           #+#    #+#             */
/*   Updated: 2021/08/14 15:55:56 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*t;

	i = 0;
	while (src[i])
		i++;
	t = (char *)malloc(sizeof(char) * (i + 1));
	if (t == ((void *)0))
		return (((void *)0));
	i = 0;
	while (src[i])
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (src);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*s;

	i = 0;
	s = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if ((s == ((void *)0)) || (ac <= 0))
		return (((void *)0));
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = ft_strdup(av[i]);
		if (s[i].str == ((void *)0))
			return ((void *)0);
		s[i].copy = ft_strdup(av[i]);
		if (s[i].str == ((void *)0))
			return ((void *)0);
		i++;
	}
	s[i].str = 0;
	return (s);
}
