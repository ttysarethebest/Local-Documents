/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 14:59:00 by awicks            #+#    #+#             */
/*   Updated: 2017/06/10 17:10:29 by awicks           ###   ########.fr       */
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

void			ft_putnbr_fd(int n, int fd)
{
	int				i;
	unsigned int	temp;
	unsigned int	er;

	if (n < 0)
	{
		n = -n - 1;
		er = n + 1;
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(temp + '0', fd);
	}
}
