/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rmvafter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:08:50 by awicks            #+#    #+#             */
/*   Updated: 2017/07/01 16:42:45 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_rmvafter(t_node *head)
{
	t_node *cursor;

	cursor = head;
	while (cursor->next->next != NULL)
		cursor = cursor->next;
	free(cursor->next);
	cursor->next = NULL;
}
