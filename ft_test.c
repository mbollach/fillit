/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkorchia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 16:37:40 by jkorchia          #+#    #+#             */
/*   Updated: 2017/04/10 17:53:44 by jkorchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	ft_print_point(t_map *deck, int line, int col)
{
	int	tetri;
	int	i;

	tetri = 0;
	while (tetri < deck->len)
	{
		i = 1;
		while (i < 5)
		{
			if (deck->coord[tetri][0].abs + deck->coord[tetri][i].abs == col &&
				deck->coord[tetri][0].ord + deck->coord[tetri][i].ord == line)
				return ((char)tetri + 65);
			i++;
		}
		tetri++;
	}
	return (46);
}

void	ft_print(t_map *deck)
{
	int	line;
	int	col;

	line = 0;
	while (line < deck->side)
	{
		col = 0;
		while (col < deck->side)
		{
			ft_putchar(ft_print_point(deck, line, col));
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	ft_move(t_map *deck)
{
	t_fillit	lst;

	lst.abs = deck->coord[deck->t_num][0].abs + deck->coord[deck->t_num][5].abs;
	lst.ord = deck->coord[deck->t_num][0].ord + deck->coord[deck->t_num][5].ord;
	if (lst.abs >= deck->side - 1)
	{
		deck->coord[deck->t_num][0].abs = 0;
		if (lst.ord >= deck->side - 1)
		{
			deck->coord[deck->t_num][0].ord = 0;
			if (deck->t_num > 0)
			{
				deck->t_num--;
				ft_move(deck);
			}
			else
				deck->side++;
		}
		else
			deck->coord[deck->t_num][0].ord++;
	}
	else
		deck->coord[deck->t_num][0].abs++;
}

void	ft_test(t_map *deck)
{
	while (deck->t_num < deck->len)
	{
		if (ft_fit(deck) == 1)
			deck->t_num++;
		else
			ft_move(deck);
	}
	ft_print(deck);
}
