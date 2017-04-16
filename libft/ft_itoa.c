/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:43:50 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/06 16:11:26 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	donkey(char *str, int n, size_t i)
{
	size_t	j;
	size_t	k;
	size_t	l;
	char	c;

	j = 0;
	l = (size_t)n;
	if (n < 0)
	{
		l = -l;
		str[j++] = '-';
	}
	k = j;
	while (j < i)
	{
		str[j++] = ((l % 10) + 48);
		l = (l / 10);
	}
	j--;
	while (k < j)
	{
		c = str[k];
		str[k++] = str[j];
		str[j--] = c;
	}
}

char		*ft_itoa(int n)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	i = 0;
	j = (size_t)n;
	if (n <= 0)
	{
		j = -j;
		i++;
	}
	while (j >= 1)
	{
		j = (j / 10);
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	donkey(str, n, i);
	return (str);
}
