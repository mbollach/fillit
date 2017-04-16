/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:24:24 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/27 11:45:32 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cast;
	unsigned char	casting;
	size_t			m;

	cast = (unsigned char *)s;
	casting = (unsigned char)c;
	m = 0;
	while (m < n)
	{
		if (cast[m] == casting)
			return (&cast[m]);
		m++;
	}
	return (NULL);
}
