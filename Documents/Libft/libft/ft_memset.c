/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 10:51:57 by awicks            #+#    #+#             */
/*   Updated: 2017/05/27 13:49:27 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		j;
	char	*doo;
	char	num;

	num = (char)c;
	j = 0;
	doo = b;
	while (len > 0)
	{
		doo[j] = num;
		j++;
		len--;
	}
	return (b);
}
