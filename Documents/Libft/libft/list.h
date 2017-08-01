/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 13:00:56 by awicks            #+#    #+#             */
/*   Updated: 2017/07/28 12:41:23 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct	b_node
{
	int	a;
	int b;
	int atotal;
	int btotal;
	struct a_node *conta;
	struct a_node *contb;
}				stack;

typedef struct	a_node
{
	int 			value;
	int				pos;
	int				perc;
	int				despos;
	struct a_node	*next;
}				t_node;

#endif
