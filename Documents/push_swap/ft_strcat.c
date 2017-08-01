/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:31:06 by awicks            #+#    #+#             */
/*   Updated: 2017/06/10 17:13:10 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strcat(char *s1, const char *s2)
{
	int i;
	int x;

	i = 0;
	x = len(s1);
	while (s2[i] != '\0')
	{
		s1[x + i] = s2[i];
		i++;
	}
	s1[x + i] = '\0';
	return (s1);
}
