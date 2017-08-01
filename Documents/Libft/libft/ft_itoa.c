/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 07:41:51 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 09:36:30 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(int n)
{
	int i;

	i = 0;
	while (n > 1 || n < -1)
	{
		i++;
		n = n / 10;
	}
	if (n < 0)
		i++;
	return (i);
}

static int		nbrl(int n)
{
	int i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i = i * 10;
	}
	return (i);
}

static char		*ito(char *fresh, unsigned int er, int i, int j)
{
	unsigned temp;

	while (i >= 1)
	{
		temp = er;
		temp = temp / i;
		temp = temp % 10;
		i = i / 10;
		fresh[j] = (temp + '0');
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}

char			*ft_itoa(int n)
{
	int				i;
	int				j;
	unsigned int	er;
	char			*fresh;

	er = n;
	j = 0;
	fresh = (char *)ft_memalloc(sizeof(char) * (len(n) + 2));
	if (fresh != NULL)
	{
		if (n < 0)
		{
			n = -n - 1;
			er = n + 1;
			fresh[0] = '-';
			j++;
		}
		i = nbrl(n);
		return (ito(fresh, er, i, j));
	}
	else
		return (fresh);
}
