/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 15:37:03 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/26 17:03:16 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast;
	unsigned char	*cast2;
	size_t			i;

	i = 0;
	cast = (unsigned char *)s1;
	cast2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cast[i] == cast2[i])
			i++;
		else
			return (cast[i] - cast2[i]);
	}
	return (0);
}
