/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:50:51 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 04:49:38 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ret(int y, const char *big, const char *l, const char *p)
{
	int			x;
	char		*tit;

	tit = "";
	x = 0;
	if (big[0] == '\0')
		x = 1;
	if (y == 0)
		x = 1;
	if (big[0] == '\0' && l[0] == '\0')
		x = 2;
	if (x == 0)
		return (p);
	else if (x == 1)
		return (NULL);
	else
		return (tit);
}

const char			*ft_strnstr(const char *big, const char *little, size_t k)
{
	int			i;
	int			z;
	int			x;
	int			j;
	const char	*point;

	x = 0;
	i = 0;
	while (big[i] != '\0' && x == 0 && k > 0)
	{
		z = k;
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && z > 0)
		{
			j++;
			z--;
		}
		if (little[j] == '\0')
			x = 1;
		if (x == 0)
			i++;
		k--;
	}
	point = &big[i];
	return (ret(x, big, little, point));
}
