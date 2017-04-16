/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_majmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:15:26 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/08 15:17:50 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_majmin(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			ft_putchar(str[i] + 32);
			i++;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			ft_putchar(str[i] - 32);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
