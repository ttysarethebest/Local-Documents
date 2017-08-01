/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 13:52:49 by awicks            #+#    #+#             */
/*   Updated: 2017/07/29 13:52:53 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *str;

	if (!size)
		return (NULL);
	else
	{
		str = ft_memalloc(size);
		if (str != NULL)
			ft_bzero(str, size);
		return (str);
	}
}
