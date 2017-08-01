/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:48:39 by awicks            #+#    #+#             */
/*   Updated: 2017/06/10 16:47:31 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		*ret(const void *str, int x)
{
	void *nul;
	void *ptr;

	nul = NULL;
	if (x == 1)
	{
		ptr = (void *)str;
		return (ptr);
	}
	else
		return (nul);
}

void			*ft_memchr(const void *s, int c, size_t n)
{
	char		chr;
	const char	*src;
	int			i;
	int			x;
	const void	*ptr;

	chr = (unsigned char)c;
	src = s;
	i = 0;
	x = 0;
	while (n > 0 && x == 0)
	{
		if (src[i] == chr)
		{
			x = 1;
			ptr = &src[i];
		}
		i++;
		n--;
	}
	return (ret(ptr, x));
}
