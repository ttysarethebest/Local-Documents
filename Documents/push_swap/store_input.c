/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:36:50 by awicks            #+#    #+#             */
/*   Updated: 2017/07/27 15:02:34 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "libft.h"
#include <stdio.h>

void	sort_arg(stack *stak , char **arg)
{
	int i;

	i = 1;
	while (arg[i] != '\0')
	{
		ft_lst_newafter(&(stak->conta));
		ft_lst_search(stak->conta, (i - 1))->value = ft_atoi(arg[i]);
		ft_lst_search(stak->conta, (i - 1))->pos = i - 1;
		i++;
	}
	stak->atotal = i - 1;
}


