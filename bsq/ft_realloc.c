/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserwyn <sserwyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:07:16 by sserwyn           #+#    #+#             */
/*   Updated: 2021/08/25 16:09:09 by sserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_realloc(char *old, char ch)
{
	char	*new;
	int		i;

	new = malloc(sizeof(char) * (ft_strlen(old) + 2));
	i = 0;
	while (i < ft_strlen(old))
	{
		new[i] = old[i];
		i++;
	}
	new[i++] = ch;
	new[i] = '\0';
	free(old);
	return (new);
}
