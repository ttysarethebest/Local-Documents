/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 21:03:47 by awicks            #+#    #+#             */
/*   Updated: 2017/05/30 13:59:53 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*src1;
	char	*src2;
	int		x;
	int		i;
	int		k;

	src1 = (char *)s1;
	src2 = (char *)s2;
	i = 0;
	x = 0;
	k = 0;
	while (n > 0 && x == 0)
	{
		if (src2[i] != src1[i])
		{
			x = 1;
			k = (unsigned char)src1[i] - (unsigned char)src2[i];
		}
		i++;
		n--;
	}
	return (k);
}
