/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 06:33:54 by awicks            #+#    #+#             */
/*   Updated: 2017/06/26 11:05:18 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	if (big == NULL)
		x = 1;
	if (l[0] == '\0')
		return (big);
	if (x == 0)
		return (p);
	if (x == 1)
		return (NULL);
	if (x == 2)
		return (tit);
	else
		return (NULL);
}

const char			*ft_strstr(const char *big, const char *little)
{
	int			i;
	int			x;
	int			j;
	const char	*point;

	x = 0;
	i = 0;
	while (big[i] != '\0' && x == 0)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0')
			j++;
		if (little[j] == '\0')
			x = 1;
		if (x == 0)
			i++;
	}
	point = &big[i];
	return (ret(x, big, little, point));
}

/*int		main(void)
{
	char *act = "hello";
	char *em1 = "";
	char *em2 = "";
	char *em = NULL;

	printf("%s", strstr(act, em1));
	return (0);
}*/
