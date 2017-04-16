/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:20:44 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/25 17:22:35 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			m;
	unsigned char	*dst2;
	unsigned char	*src2;

	m = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char*)src;
	while (m < len && src < dst)
	{
		dst2[len - m - 1] = src2[len - m - 1];
		m++;
	}
	while (m < len && src > dst)
	{
		dst2[m] = src2[m];
		m++;
	}
	return (dst);
}
