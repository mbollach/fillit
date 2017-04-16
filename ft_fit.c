/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkorchia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 20:45:12 by jkorchia          #+#    #+#             */
/*   Updated: 2017/04/10 17:52:12 by jkorchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_sup(t_map *deck, t_fillit *zero)
{
	int	t;
	int	block;

	t = 0;
	while (t < deck->t_num)
	{
		block = 1;
		while (block < 5)
		{
			if (zero->abs == deck->coord[t][0].abs + deck->coord[t][block].abs
			&& zero->ord == deck->coord[t][0].ord + deck->coord[t][block].ord)
				return (0);
			block++;
		}
		t++;
	}
	return (1);
}

int	ft_fit(t_map *deck)
{
	int			block;
	t_fillit	zero;

	block = 1;
	while (block < 5)
	{
		zero.abs = deck->coord[deck->t_num][0].abs +
			deck->coord[deck->t_num][block].abs;
		zero.ord = deck->coord[deck->t_num][0].ord +
			deck->coord[deck->t_num][block].ord;
		if (ft_sup(deck, &zero) == 0)
			return (0);
		block++;
	}
	return (1);
}
