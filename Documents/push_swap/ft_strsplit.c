/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 08:10:24 by awicks            #+#    #+#             */
/*   Updated: 2017/07/06 16:05:32 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lenwh(char const *s, char c)
{
	int i;
	int k;
	char *ptr;

	i = 0;
	k = 0;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c && ptr[i + 1] != c)
			k++;
		i++;
	}
	k++;
	k++;
	return (k);
}

char	*sc(char const *s, char c, int x)
{
	int i;
	int k;
	char *ptr;
	char *fro;

	i = 0;
	k = 0;
	ptr = (char *)s;
	if (ptr[0] == c)
		x++;
	while (ptr[i] != '\0' && k < x) 
	{	
		if (ptr[i] == c && ptr[i + 1] != c)
			k++;
		i++;
	}
	fro = &ptr[i];
	return (fro);
}

int		lensi(char const *str, char c, int x)
{
	int i;
	char *p;
	
	i = 0;
	p = sc(str, c, x);
	while (p[i] != c && p[i] != '\0')
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int k;
	char **str;
	char *ptr;

	i = 0;
	str = (char **)malloc(sizeof(char*) * (lenwh(s, c) + 1));
	if (str == NULL)
		return (str);
	while (i < lenwh(s, c) - 1)
	{
		k = 0;
		str[i] = (char *)malloc(sizeof(char) * (lensi(s, c, i) + 1));
		if (str == NULL)
			return (str);
		ptr = sc(s, c, i);
		while (ptr[k] != c && ptr[k] != '\0')
		{
			str[i][k] = ptr[k];
			k++;
		}
		str[i][k] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
