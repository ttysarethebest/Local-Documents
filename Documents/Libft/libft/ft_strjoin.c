/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:31:06 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 09:30:31 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*dst;

	dst = (char *)ft_memalloc(sizeof(char) *
						(len((char *)s1) + len((char *)s2) + 1));
	i = 0;
	x = len((char *)s1);
	if (dst != NULL)
	{
		dst = ft_strcpy(dst, s1);
		while (s2[i] != '\0')
		{
			dst[x + i] = s2[i];
			i++;
		}
		dst[x + i] = '\0';
	}
	return (dst);
}
