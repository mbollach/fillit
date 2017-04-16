/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:48:05 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/06 18:00:46 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = 0;
	s = NULL;
	if (s1 && s2)
	{
		s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (s == NULL)
			return (NULL);
		while (s1[i])
		{
			s[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			s[i++] = s2[j++];
		}
		s[i] = '\0';
	}
	return (s);
}
