/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 14:47:16 by awicks            #+#    #+#             */
/*   Updated: 2017/07/22 11:27:21 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "list.h"

t_node		*ft_lst_search(t_node *head, int i)
{
	t_node *cursor;

	cursor = head;
	while (i > 0 && cursor != NULL)
	{
		cursor = cursor->next;
		i--;
	}
	return (cursor);
}
