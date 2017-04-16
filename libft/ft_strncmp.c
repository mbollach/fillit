/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:47:16 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/06 18:22:42 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast;
	unsigned char	*casting;

	cast = (unsigned char *)s1;
	casting = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (cast[i] - casting[i]);
		if (s1[i] == 0 && s2[i] == 0)
			return (0);
		i++;
	}
	return (0);
}
