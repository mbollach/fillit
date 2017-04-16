/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:17:49 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/07 16:42:39 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		if (content)
		{
			if (!(new->content = (void *)malloc(content_size)))
				return (NULL);
			new->content_size = content_size;
			new->content = ft_memcpy(new->content, content, content_size);
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
		return (new);
	}
	return (0);
}
