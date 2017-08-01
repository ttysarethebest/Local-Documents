/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:45:24 by awicks            #+#    #+#             */
/*   Updated: 2017/07/28 12:49:23 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int total;
	int marker;

	total = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '+'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		i++;
		marker = 1;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	if (marker == 1)
		return (total * -1);
	else
		return (total);
}
