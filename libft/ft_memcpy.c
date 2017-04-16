/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:10:22 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/25 15:59:58 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			m;
	unsigned char	*cast;
	unsigned char	*casting;

	m = 0;
	cast = (unsigned char *)dst;
	casting = (unsigned char *)src;
	while (m < n)
	{
		cast[m] = casting[m];
		m++;
	}
	return (dst);
}
