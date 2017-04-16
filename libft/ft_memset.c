/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:09:06 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/26 17:30:28 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			m;
	unsigned char	*cast;
	unsigned char	castorama;

	m = 0;
	castorama = (unsigned char)c;
	cast = (unsigned char *)b;
	while (m < len)
	{
		cast[m] = castorama;
		m++;
	}
	return (b);
}
