/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:43:19 by awicks            #+#    #+#             */
/*   Updated: 2017/07/28 09:32:32 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcpy_buffer(char *dest, char *src, int x)
{
	int i;
	int z;

	z = 0;
	i = 0;
	while (i < x)
	{
		dest[i] = ' ';
		i++;
	}
	dest[i] = '\0';
	i--;
	while (src[z] != '\0')
		z++;
	z--;
	while (z >= 0)
	{
		dest[i] = src[z];
		i--;
		z--;
	}
	return (0);
}
