/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkorchia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:56:02 by jkorchia          #+#    #+#             */
/*   Updated: 2017/04/12 19:21:23 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check_t_size(char *str, int l)
{
	int	diese;
	int	dot;
	int	n;
	int	i;

	diese = 0;
	dot = 0;
	n = 0;
	i = 0;
	if (!str)
		return (0);
	while (i < l)
	{
		if (str[i] == '#')
			diese++;
		if (str[i] == '.')
			dot++;
		if (str[i] == '\n' && (i + 1) % 5 == 0)
			n++;
		i++;
	}
	if (diese == 4 && dot == 12 && n == 4 && (str[i + 1] == 10 ||
		str[i + 1] == '\0'))
		return (1);
	return (0);
}

int			ft_check_t_block(char **sarray)
{
	int	l;
	int	c;
	int	link;

	l = 0;
	link = 0;
	while (sarray[l])
	{
		c = 0;
		while (sarray[l][c])
		{
			if (l != 0 && sarray[l][c] == '#' && sarray[l - 1][c] == '#')
				link++;
			if (c != 0 && sarray[l][c] == '#' && sarray[l][c - 1] == '#')
				link++;
			if (l < 3 && sarray[l][c] == '#' && sarray[l + 1][c] == '#')
				link++;
			if (c < 3 && sarray[l][c] == '#' && sarray[l][c + 1] == '#')
				link++;
			c++;
		}
		l++;
	}
	return (link);
}

t_fillit	*ft_coord(char **sarrayfile, t_fillit *tetri, int n)
{
	t_fillit	fst_point;
	int			col;
	int			line;

	fst_point = ft_fst_point(sarrayfile);
	tetri[0].abs = 0;
	tetri[0].ord = 0;
	line = fst_point.ord;
	while (sarrayfile[line])
	{
		col = fst_point.abs;
		while (sarrayfile[line][col])
		{
			if (sarrayfile[line][col] == '#')
			{
				tetri[n].abs = col - fst_point.abs;
				tetri[n].ord = line - fst_point.ord;
				n++;
			}
			col++;
		}
		line++;
	}
	tetri[5] = ft_lst(sarrayfile, &fst_point, &tetri[4]);
	return (tetri);
}

t_fillit	*ft_check_file(char const *file, unsigned int i, int l)
{
	char		*strfile;
	char		**sarrayfile;
	int			check1;
	int			check2;
	t_fillit	*tetri;

	strfile = NULL;
	strfile = ft_strsub(file, i, l);
	if (!strfile || ft_strlen(strfile) != (size_t)l)
		return (0);
	sarrayfile = ft_strsplit(strfile, 10);
	check1 = ft_check_t_size(strfile, l);
	check2 = ft_check_t_block(sarrayfile);
	free(strfile);
	tetri = 0;
	if (check1 == 1 && (check2 == 6 || check2 == 8))
	{
		sarrayfile = ft_strsplit(strfile, 10);
		if (!(tetri = (t_fillit*)malloc(sizeof(t_fillit) * 6)))
			return (0);
		tetri = ft_coord(sarrayfile, tetri, 1);
		return (tetri);
	}
	return (0);
}
