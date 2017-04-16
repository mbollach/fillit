/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:43:11 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/28 17:43:12 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			m;
	unsigned char	*cast;
	unsigned char	*casting;

	m = 0;
	cast = (unsigned char *)dst;
	casting = (unsigned char *)src;
	while (m < n && casting[m] != (unsigned char)c)
	{
		cast[m] = casting[m];
		m++;
	}
	if (m == n)
		return (0);
	else
	{
		cast[m] = (unsigned char)c;
		m++;
		return (&dst[m]);
	}
}
