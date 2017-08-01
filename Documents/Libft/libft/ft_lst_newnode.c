/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_newnode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 13:42:40 by awicks            #+#    #+#             */
/*   Updated: 2017/07/22 11:43:09 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "list.h"

t_node		*ft_lst_newnode(void)
{
	t_node *new;

	new = (t_node *)ft_memalloc(sizeof(t_node));
	if (new == NULL)
		ft_putstr("FT_LSTADDNODE ft_memalloc FAILED");
	new->next = NULL;
	return (new);
}
