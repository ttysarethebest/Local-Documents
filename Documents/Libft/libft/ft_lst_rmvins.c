/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rmvins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:53:33 by awicks            #+#    #+#             */
/*   Updated: 2017/07/01 18:23:40 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_rmvins(t_node *head, int i)
{
	t_node *temp;

	if (ft_lst_search(head, (i - 1))->next != NULL)
	{
		temp = ft_lst_search(head, i);
		if (ft_lst_search(head, i)->next != NULL)
			ft_lst_search(head, (i - 1))->next = ft_lst_search(head, i)->next;
		else
			ft_lst_search(head, (i - 1))->next = NULL;
		free(temp);
	}
}
