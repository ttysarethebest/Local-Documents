/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_insafter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 15:18:25 by awicks            #+#    #+#             */
/*   Updated: 2017/07/26 15:45:06 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_insafter(t_node *head, int i)
{
	t_node *cursor1;
	t_node *cursor2;

	cursor1 = ft_lst_search(head, i);
	cursor2 = ft_lst_search(head, (i + 1));
	if (cursor1->next == NULL)
		ft_lst_newafter(&head);
	else
	{
		cursor1->next = ft_lst_newnode();
		cursor1->next->next = cursor2;
	}
}
