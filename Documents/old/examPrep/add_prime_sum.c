/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 08:58:24 by awicks            #+#    #+#             */
/*   Updated: 2017/05/12 16:57:02 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int x;
	int j;

	i = 0;
	j = 1;
	x = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		x = x + ((str[i] - '0') * j);
		j = j * 10;
		i--;
	}
	return (x);
}

void	ft_putnbr(int x)
{
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x +'0');
}

void	prime(char *str)
{
	int i;
	int x;
	int z;
	int total;

	total = 0;
	i = 0;
	x = ft_atoi(str);
	while(i < x)
	{
		z = 2;
		while ((i % z != 0 && z <= i) || (z == i && z <= i))
		{
			if(z == i)
				total = total + i;
			z++;
		}
		i++;
	}
	i = 2;
	while((x % i != 0 && i <= x) || (i == x && i <= x))
	{
		if (i == x)
			total = total + x;
		i++;
	}
	ft_putnbr(total);
}

int		main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] != '-')	
	{	
		prime(argv[1]);
		ft_putchar('\n');
	}
	else
	{	
		ft_putchar('0');
		ft_putchar('\n');
	}
}




















