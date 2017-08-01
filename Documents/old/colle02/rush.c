/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 07:22:16 by awicks            #+#    #+#             */
/*   Updated: 2017/05/07 13:56:17 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(int a, char **argv);

void	ft_putchar(char a);

void	rushline1(int a, char **argv)
{
	int i;
	int k;

	k = 2;
	i = ft_atoi(1, argv);
	if (i >= 1)
		ft_putchar('A');
	while (k < i)
	{
		ft_putchar('B');
		k++;
	}
	if (i == k && k > 3)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rushmid(int a, char** argv)
{
	int i;
	int k;

	k = 2;
	i = ft_atoi(1, argv);
	if (i >= 1)
		ft_putchar('B');
	while (k < i)
	{
		ft_putchar(' ');
		k++;
	}
	if (i == k && k > 3)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rushline2(int a, char **argv)
{
	int i;
	int k;

	k = 2;
	i = ft_atoi(1, argv);
	if (i >= 1)
		ft_putchar('C');
	while (k < i)
	{
		ft_putchar('B');
		k++;
	}
	if (i == k && k >3)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int a, char **argv)
{
	int i;
	int k;
	
	k = 2;
	i = ft_atoi(2, argv);
	rushline1(a, argv);
	while (k < i)
	{	
		rushmid(a, argv);
		k++;
	}
	if (i == k && k > 2)
		rushline2(a, argv);
}

int		main(int argc, char **argv)
{
	rush(argc, argv);
	return (0);
}

