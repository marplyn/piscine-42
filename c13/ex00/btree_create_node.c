/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dground <dground@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:13:51 by dground           #+#    #+#             */
/*   Updated: 2021/08/20 21:30:56 by dground          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp == NULL)
		return (NULL);
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->item = item;
	return (tmp);
}
