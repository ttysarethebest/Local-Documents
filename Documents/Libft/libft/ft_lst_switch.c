/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_switch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 15:24:56 by awicks            #+#    #+#             */
/*   Updated: 2017/07/27 13:09:40 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_switch(t_node **head, int i, int x)
{
	t_node *i1;
	t_node *i2;
	t_node *x1;
	t_node *x2;

	if (i == x)
		return ;
	x1 = ft_lst_search(*head, x);
	x2 = ft_lst_search(*head, x)->next;
	i1 = ft_lst_search(*head, i);
	i2 = ft_lst_search(*head, i)->next;
	if (i == 0)
		*head = x1;
	else
		ft_lst_search(*head, i - 1)->next = x1;
	ft_lst_search(*head, i)->next = i2;
	ft_lst_search(*head, x - 1)->next = i1;
	ft_lst_search(*head, x)->next = x2;
}
