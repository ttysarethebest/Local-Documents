/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:10:07 by awicks            #+#    #+#             */
/*   Updated: 2017/07/27 14:40:17 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_sort(t_node **head, int (*f)(t_node *p_1, t_node *p_2))
{
	int i;
	int j;

	j = 0;
	while (j != 2)
	{
		i = 0;
		while (ft_lst_search(*head, i)->next != NULL)
		{
			if (f(ft_lst_search(*head, i), ft_lst_search(*head, i + 1)) == 1)
			{
				ft_lst_switch(head, i, (i + 1));
				i = 0;
			}
			i++;
		}
		j++;
	}
}
