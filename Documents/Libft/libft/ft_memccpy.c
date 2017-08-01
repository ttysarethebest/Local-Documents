/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 08:40:52 by awicks            #+#    #+#             */
/*   Updated: 2017/06/10 16:46:40 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		*ret(void *dst, int x)
{
	void *ptr;

	if (x == 0)
		ptr = NULL;
	else
		ptr = (void *)dst;
	return (ptr);
}

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	int		x;
	char	*dest;
	char	*sorc;

	i = 0;
	x = 0;
	dest = (char *)dst;
	sorc = (char *)src;
	while (n > 0 && x == 0)
	{
		if ((unsigned char)sorc[i] == (unsigned char)c)
			x = 1;
		dest[i] = sorc[i];
		i++;
		n--;
	}
	return (ret(&dest[i], x));
}
