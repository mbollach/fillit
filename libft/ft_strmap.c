/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 13:11:19 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/29 16:39:40 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (s)
	{
		while (s[i])
			i++;
		str = (char *)malloc(sizeof(char) * (i + 1));
		if (str == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
