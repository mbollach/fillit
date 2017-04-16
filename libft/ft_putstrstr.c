/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:43:02 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/07 17:03:57 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrstr(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		ft_putendl(str[i]);
		i++;
	}
}
