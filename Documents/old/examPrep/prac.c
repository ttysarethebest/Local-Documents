/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 16:37:25 by awicks            #+#    #+#             */
/*   Updated: 2017/05/12 20:15:46 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int *xpoint;
	int i;

	i = 0;
	xpoint = (int*)malloc(sizeof(int) * 6);
	while (i < 6)
	{
		xpoint[0] = 5;
		printf("%d", xpoint[0]);
		i++;
	}
	return (0);
}
int		main(void)
{
	ft_rrange(1,5);
	return(0)
}








