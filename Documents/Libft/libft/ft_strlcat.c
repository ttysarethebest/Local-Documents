/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 13:40:06 by awicks            #+#    #+#             */
/*   Updated: 2017/07/28 15:07:23 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	int length;
	int i;
	int x;
	int hold;

	i = 0;
	x = len(dst);
	length = (int)size - ft_strlen(dst) - 1;
	hold = ft_strlen(dst);
	while (src[i] != '\0' && length > 0)
	{
		dst[x + i] = src[i];
		i++;
		length--;
	}
	if (length >= 0)
		dst[x + i] = '\0';
	if (src[i] == '\0' || hold == 0)
		return ((size_t)(hold + ft_strlen(src)));
	else
		return (size + (size_t)ft_strlen(src));
}
