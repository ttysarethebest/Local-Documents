/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 23:57:19 by awicks            #+#    #+#             */
/*   Updated: 2017/05/11 01:15:39 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{	
	int i = 0;
	int x;
	char *temp;
	char *oper;
	oper = (char *)malloc(sizeof(char)*2048);
	while (i < 2048)
	{
		oper[i] = 0;
		i++;
	}
	i = 0;
	temp = &oper[i];

	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '[' && *temp == 0)
		{
			x = -1;
			while (x != 0)
			{
				if (x == -1)
					x++;
				if (argv[1][i] == ']')
					x--;
				if (argv[1][i] == '[')
					x++;
				i++;
			}
		}
		if (argv[1][i] == ']' && *temp != 0)
		{
			x = 1;
			while (x != 0)
			{
				if (x == 1)
					x--;	
				if (argv[1][i] == ']')
					x--;
				if (argv[1][i] == '[')
					x++;
				i--;
			}
			i += 2;
		}
		if (argv[1][i] == '>')
			temp++;
		if (argv[1][i] == '<')
			temp--;
		if (argv[1][i] == '+')
			(*temp)++;
		if (argv[1][i] == '-')
			(*temp)--;
		if (argv[1][i] == '.')
			write(1, temp, 1);
		i++;
	}
	return (0);
}
