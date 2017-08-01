/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:41:54 by awicks            #+#    #+#             */
/*   Updated: 2017/07/27 15:02:28 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "list.h"

void	sort_arg(stack *stack, char **arg);

void	init(stack **stak)
{
	*stak = (stack *)malloc(sizeof(stack));
	(*stak)->conta = NULL;
	(*stak)->contb = NULL;
}

int		main(int argc, char **argv)
{
	stack  *stak;

	init(&stak);
	sort_arg(stak, argv);
	return (0);
}

