/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 06:30:45 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 06:33:22 by awicks           ###   ########.fr       */
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

char			*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int x;

	i = 0;
	x = len(s1);
	while (s2[i] != '\0' && n > 0)
	{
		s1[x + i] = s2[i];
		i++;
		n--;
	}
	s1[x + i] = '\0';
	return (s1);
}
