/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkorchia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 17:18:32 by jkorchia          #+#    #+#             */
/*   Updated: 2017/04/12 18:35:51 by jkorchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_root(int blocks)
{
	int	i;
	int root;

	i = 1;
	root = blocks;
	while (root > i)
	{
		i++;
		root = blocks / i;
	}
	return (i);
}

int	ft_greater(t_fillit **coord)
{
	int	t;
	int	col;
	int	line;

	t = 0;
	col = 0;
	line = 0;
	while (coord[t])
	{
		if (coord[t][5].abs > col)
			col = coord[t][5].abs;
		if (coord[t][5].ord > line)
			line = coord[t][5].ord;
		t++;
	}
	if (col > line)
		return (col + 1);
	return (line + 1);
}

int	ft_side(t_fillit **coord, int len)
{
	int	root;
	int	greater;

	root = ft_root(len * 4);
	greater = ft_greater(coord);
	if (root > greater)
		return (root);
	return (greater);
}

int	ft_tetri_len(t_fillit **coord)
{
	int	i;

	i = 0;
	while (coord[i])
		i++;
	return (i);
}
