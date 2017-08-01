/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 19:14:33 by awicks            #+#    #+#             */
/*   Updated: 2017/05/10 20:10:06 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	rot(char **argv, int k)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] > 96 && argv[1][i] < 123)
		{	
			if (argv[1][i] + k > 122)
				ft_putchar(argv[1][i] + k - 26);
			else
				ft_putchar(argv[1][i] + k);
		}
		else if (argv[1][i] > 64 && argv[1][i] < 91)
		{	
			if (argv[1][i] + k > 90)
				ft_putchar(argv[1][i] + k - 26);
			else
				ft_putchar(argv[1][i] + k);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int k;
	int j;

	k = 0;
	j = 45;
	while ( j > 26)
		j = j - 26;
	if (argc !=2)
	{
		ft_putchar('\n');
		k = 1;
	}
	if (k == 0)
		rot(argv, j);
	return (0);
}
