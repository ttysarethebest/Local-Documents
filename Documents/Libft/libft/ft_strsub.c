/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 14:59:47 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 09:29:15 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (str != NULL)
	{	
		while (len > 0)
		{
			str[i] = s[start];
			start++;
			i++;
			len--;
		}
		str[i] = '\0';
	}
	return (str);
}
