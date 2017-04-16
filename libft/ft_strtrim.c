/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:06:23 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/30 02:08:00 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	k;

	i = 0;
	str = NULL;
	if (s)
	{
		k = ft_strlen(s);
		while (s[i] && (s[i] == 32 || s[i] == 10 || s[i] == 9))
			i++;
		if (i == k)
			return (ft_strnew('0'));
		while (k > 0 && (s[k - 1] == 32 || s[k - 1] == 10 || s[k - 1] == 9))
			k--;
		str = ft_strsub(s, i, k - i);
		if (str == NULL)
			return (NULL);
		if (i == k)
			return ((char *)s);
	}
	return (str);
}
