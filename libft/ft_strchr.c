/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:43:58 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/28 17:40:52 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cast;
	char	casting;

	i = 0;
	casting = (char)c;
	cast = (char *)s;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] || casting == '\0')
		return (&cast[i]);
	else
		return (0);
}
