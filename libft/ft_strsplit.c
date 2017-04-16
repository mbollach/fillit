/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 23:13:25 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/06 16:10:07 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	words(const char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			j++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

static int	letters(const char *str, char c, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	k = k + 1;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && j < k)
			j++;
		if (j == k)
		{
			while (str[i] && str[i] != c)
			{
				i++;
				j++;
			}
		}
		while (str[i] && str[i] != c)
			i++;
	}
	return (j - k);
}

static void	assign(char const *s, char **str, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] == c)
			while (s[k] == c)
				k++;
		else
		{
			while (s[k] && s[k] != c)
			{
				str[i][j] = s[k];
				k++;
				j++;
			}
			str[i][j] = '\0';
			i++;
			j = 0;
		}
	}
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	j = 0;
	k = 0;
	str = NULL;
	if (s)
	{
		j = words(s, c);
		if (!(str = (char **)malloc(sizeof(str) * j + 1)))
			return (NULL);
		while (i < j)
		{
			k = letters(s, c, i);
			str[i] = (char *)malloc(sizeof(char*) * k + 1);
			i++;
		}
		str[j] = 0;
		assign(s, str, c);
	}
	return (str);
}
