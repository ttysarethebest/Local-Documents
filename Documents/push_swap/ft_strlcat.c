/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 13:40:06 by awicks            #+#    #+#             */
/*   Updated: 2017/06/16 13:52:44 by awicks           ###   ########.fr       */
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

size_t			ft_strlcat(char *s1, const char *s2, size_t n)
{
	int i;
	int x;
	int k;

	i = 0;
	k = len(s1) + len((char *)s2);
	x = len(s1);
	while (s2[i] != '\0' && n - x > 0)
	{
		s1[x + i] = s2[i];
		i++;
		n--;
	}
	s1[x + i] = '\0';
	while (s1[k] != '\0' && n > 0)
		k++;
	return (k);
}
