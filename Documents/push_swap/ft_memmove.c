/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:28:13 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 09:20:10 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;
	size_t		i;

	dest = (char *)dst;
	sorc = (char *)src;
	i = 0;
	if (dest < sorc)
	{
		while (i < len)
		{
			dest[i] = sorc[i];
			i++;
		}
	}
	if (dest > sorc)
		while (len--)
			dest[len] = sorc[len];
	return (dst);
}
