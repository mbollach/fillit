/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:18:05 by mbollach          #+#    #+#             */
/*   Updated: 2016/11/28 17:42:27 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cast;
	char	casting;

	i = 0;
	casting = (char)c;
	cast = (char *)s;
	while (s[i])
		i++;
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] || casting == '\0')
		return (&cast[i]);
	else
		return (0);
}
