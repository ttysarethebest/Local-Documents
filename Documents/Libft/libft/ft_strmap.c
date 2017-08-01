/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:47:10 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 09:27:14 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	return (i);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dst;

	dst = (char *)ft_memalloc(sizeof(char) * len(s));
	i = 0;
	if (dst != NULL)
	{
		while (s[i] != '\0')
		{
			dst[i] = f(s[i]);
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
