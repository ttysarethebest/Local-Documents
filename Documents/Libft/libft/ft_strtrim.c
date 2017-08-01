/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 18:28:05 by awicks            #+#    #+#             */
/*   Updated: 2017/06/11 10:41:55 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		len(char const *s)
{
	int		i;
	int		x;
	int		k;
	char	*str;

	str = (char *)s;
	i = 0;
	k = 0;
	while (str[i] != '\0')
		i++;
	x = i - 1;
	while (str[k] == ' ' || str[k] == '\n' || str[k] == '\t')
	{
		i--;
		k++;
	}
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\t')
	{
		i--;
		x--;
	}
	i++;
	return (i);
}

static char			*trim(char const *s)
{
	int		i;
	int		k;
	char	*str;
	char	*ptr;

	i = 0;
	k = 0;
	str = (char *)s;
	ptr = (char *)ft_memalloc(sizeof(char) * len(s));
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (ptr != NULL)
	{	
		while (k < (len(s) - 1))
		{
			ptr[k] = str[i];
			i++;
			k++;
		}
		ptr[k] = '\0';
	}
	return (ptr);
}

char			*ft_strtrim(char const *s)
{
	int i;
	char *str;
	char *ptr;
	int k;

	i = 0;
	k = 0;
	str = (char *)s;
	while (str[k] != '\0')
	{	
		if (str[k] != ' ' && str[k] != '\n' && str[k] != '\t')
			i++;
		k++;
	}
	if (i != 0 )
		return (trim(s));
	else
	{
		ptr = (char *)ft_memalloc(sizeof(char) *1);
		ptr = "";
		return (ptr);
	}
}
