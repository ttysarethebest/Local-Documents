/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 11:53:32 by awicks            #+#    #+#             */
/*   Updated: 2017/06/07 07:22:39 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *b, size_t len)
{
	int		j;
	char	*doo;

	j = 0;
	doo = b;
	while (len > 0)
	{
		doo[j] = '\0';
		j++;
		len--;
	}
}
