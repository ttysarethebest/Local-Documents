/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 11:30:09 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 09:25:58 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char		*ft_strdup(char *str)
{
	int		le;
	int		i;
	char	*dest;

	i = 0;
	le = len(str);
	dest = (char *)ft_memalloc(sizeof(char) * (le + 1));
	if (dest != NULL)
	{
		while (le > 0)
		{
			dest[i] = str[i];
			i++;
			le--;
		}
		dest[i] = '\0';
	}
	return (dest);
}
