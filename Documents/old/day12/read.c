/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 16:09:05 by awicks            #+#    #+#             */
/*   Updated: 2017/05/11 16:44:04 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcn1.h>

void	main(void)
{
	int rd;
	char buffer[65];
	int i;

	rd = open("subject.txt", O_RDONLY);
	while (i == read(fh, buffer, 64))
	{
		buffer[i] == '\0'


