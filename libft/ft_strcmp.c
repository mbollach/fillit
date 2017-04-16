/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:44:59 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/06 17:36:27 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*cast;
	unsigned char	*casting;

	cast = (unsigned char *)s1;
	casting = (unsigned char *)s2;
	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (cast[i] - casting[i]);
}
