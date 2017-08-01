/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 10:14:41 by awicks            #+#    #+#             */
/*   Updated: 2017/06/28 11:09:58 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len(char *str)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		i++;
	while (!(str[i] < 48 || str[i] >57) && str[i] != '\0')
	{
		x = x * 10;
		i++;
	}
	x = x / 10;
	return (x);
}

int		ft_atoi_sub(char *str, int i, int num)
{
	int total;
	int mult;

	total = 0;
	mult = (len(str));
	while (!(str[i] < 48 || str[i] > 57) && str[i] != '\0')
	{
		total = total + ((str[i] - '0') * mult);
		mult = mult / 10;
		i++;
	}
	return (total * num);
}

int		ft_atoi(char *str)
{
	int i;
	int num;

	i = 0;
	num = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		num = -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	else
		return (ft_atoi_sub(str, i, num));
}
