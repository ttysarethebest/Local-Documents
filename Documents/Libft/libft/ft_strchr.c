/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 16:13:32 by awicks            #+#    #+#             */
/*   Updated: 2017/06/28 09:50:33 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ret(int y, const char *point, int c)
{
	int			x;
	const char	*tit;

	tit = "";
	x = 0;
	if (y == 0)
		x = 1;
	if (c < 0)
		x = 1;
	if (c > 127)
		x = 1;
	if (x == 0)
		return (point);
	else if (x == 1)
		return (NULL);
	else
		return (tit);
}

const char			*ft_strchr(const char *big, int c)
{
	int			i;
	int			x;
	const char	*point;

	x = 0;
	i = 0;
	if (c == '\0')
	{
		while (big[i] != '\0')
			i++;
		x = 1;
	}
	else
	{
		while (big[i] != '\0' && x == 0)
		{
			if (big[i] == c)
				x = 1;
			if (x == 0)
				i++;
		}
	}
	point = &big[i];
	return (ret(x, point, c));
}
