/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkorchia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 21:09:32 by jkorchia          #+#    #+#             */
/*   Updated: 2017/04/08 16:18:28 by jkorchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_lst_col(char **sarray)
{
	int			line;
	int			i;
	int			col;

	line = 0;
	col = 0;
	while (sarray[line])
	{
		i = 0;
		while (sarray[line][i])
		{
			if (i > col && sarray[line][i] == '#')
				col = i;
			i++;
		}
		line++;
	}
	return (col);
}

t_fillit	ft_lst(char **sarray, t_fillit *fst, t_fillit *lst)
{
	t_fillit	lst_point;

	lst_point.abs = ft_lst_col(sarray) - fst->abs;
	lst_point.ord = lst->ord;
	return (lst_point);
}

int			ft_fst_line(char **sarray)
{
	int			line;
	int			col;

	line = 0;
	while (sarray[line])
	{
		col = 0;
		while (sarray[line][col])
		{
			if (sarray[line][col] == '#')
				return (line);
			col++;
		}
		line++;
	}
	return (0);
}

int			ft_fst_col(char **sarray)
{
	int			line;
	int			i;
	int			col;

	line = 0;
	col = 5;
	while (sarray[line] && col > 0)
	{
		i = 0;
		while (sarray[line][i] && i < col)
		{
			if (sarray[line][i] == '#')
				col = i;
			i++;
		}
		line++;
	}
	return (col);
}

t_fillit	ft_fst_point(char **sarray)
{
	t_fillit	fst_point;

	fst_point.abs = ft_fst_col(sarray);
	fst_point.ord = ft_fst_line(sarray);
	return (fst_point);
}
