/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 12:23:01 by awicks            #+#    #+#             */
/*   Updated: 2017/06/06 07:26:58 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptr;
	int			i;
	const char	*temp;

	ptr = dst;
	temp = src;
	i = 0;
	while (n > 0)
	{
		ptr[i] = temp[i];
		i++;
		n--;
	}
	return (dst);
}
