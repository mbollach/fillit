/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revazaq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 18:24:22 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/08 15:21:50 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_revazaq_a(char *str, size_t j)
{
	if (str[j] == 65)
	{
		ft_putchar(str[j] + 16);
		j++;
	}
	if (str[j] == 81)
	{
		ft_putchar(str[j] - 16);
		j++;
	}
	if (str[j] == 97)
	{
		ft_putchar(str[j] + 16);
		j++;
	}
	if (str[j] == 113)
	{
		ft_putchar(str[j] - 16);
		j++;
	}
	return (j);
}

static size_t	ft_revazaq_z(char *str, size_t j)
{
	if (str[j] == 87)
	{
		ft_putchar(str[j] + 3);
		j++;
	}
	if (str[j] == 90)
	{
		ft_putchar(str[j] - 3);
		j++;
	}
	if (str[j] == 119)
	{
		ft_putchar(str[j] + 3);
		j++;
	}
	if (str[j] == 122)
	{
		ft_putchar(str[j] - 3);
		j++;
	}
	return (j);
}

static size_t	ft_revazaq_m(char *str, size_t j)
{
	if (str[j] == 109)
	{
		ft_putchar(str[j] - 45);
		j++;
	}
	if (str[j] == 63)
	{
		ft_putchar(str[j] + 45);
		j++;
	}
	return (j);
}

static size_t	ft_revazaq_all(char *str, size_t j)
{
	if (str[j] != 65 && str[j] != 81 && str[j] != 97 && str[j] != 113)
	{
		if (str[j] != 87 && str[j] != 90 && str[j] != 119 && str[j] != 122)
		{
			if (str[j] != 109 && str[j] != 63)
			{
				ft_putchar(str[j]);
				j++;
			}
		}
	}
	return (j);
}

void			ft_revazaq(char *str)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < i)
	{
		if (j < i)
			j = ft_revazaq_a(str, j);
		if (j < i)
			j = ft_revazaq_z(str, j);
		if (j < i)
			j = ft_revazaq_m(str, j);
		if (j < i)
			j = ft_revazaq_all(str, j);
	}
}
