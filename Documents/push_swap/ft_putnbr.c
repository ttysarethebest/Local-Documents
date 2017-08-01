/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:49:05 by awicks            #+#    #+#             */
/*   Updated: 2017/06/10 18:51:54 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void			ft_putnbr(int n)
{
	int				i;
	unsigned int	temp;
	unsigned int	er;

	if (n < 0)
	{
		n = -n - 1;
		er = n + 1;
		ft_putchar('-');
	}
	else
		er = n;
	i = nbrl(n);
	while (i >= 1)
	{
		temp = er;
		temp = temp / i;
		temp = temp % 10;
		i = i / 10;
		ft_putchar(temp + '0');
	}
}
