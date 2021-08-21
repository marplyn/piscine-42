/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:56:43 by dground           #+#    #+#             */
/*   Updated: 2021/08/19 15:16:09 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*list;
	t_list	*tmp;

	list = begin_list;
	tmp = ((void *)0);
	while (list)
	{
		if (list->next)
			tmp = list->next;
		else
			tmp = ((void *)0);
		free_fct(list->data);
		free(list);
		list = tmp;
	}
}
