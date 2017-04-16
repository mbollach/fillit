/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:43:34 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/28 18:26:09 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *i;

	i = 0;
	if (size > 0)
	{
		i = (void *)malloc(sizeof(size_t) * (size));
		if (i)
			ft_bzero(i, size);
	}
	return (i);
}
