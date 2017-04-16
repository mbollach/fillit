/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:54:40 by mbollach          #+#    #+#             */
/*   Updated: 2017/04/13 18:25:43 by jkorchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map		ft_deck(t_fillit ***coord)
{
	t_map	deck;

	deck.coord = *coord;
	deck.len = ft_tetri_len(*coord);
	deck.side = ft_side(*coord, deck.len);
	deck.t_num = 0;
	return (deck);
}

t_fillit	**ft_attribute(t_fillit ***coord, char *buffer, int i, int j)
{
	t_fillit	*tetri;
	int			size;

	size = ft_strlen(buffer);
	if (i + 21 <= size)
		tetri = ft_check_file(buffer, i, 21);
	else
		tetri = ft_check_file(buffer, i, 20);
	if (i <= size)
	{
		if (tetri && j < 26)
		{
			(*coord)[j] = tetri;
			*coord = ft_attribute(coord, buffer, i + 21, j + 1);
		}
		else
		{
			ft_putstr("error");
			return (0);
		}
	}
	return (*coord);
}

void		ft_manage(int fd)
{
	int			i;
	int			rid;
	t_fillit	**coord;
	char		buffer[BUFF_SIZE + 1];
	t_map		deck;

	ft_bzero(buffer, BUFF_SIZE + 1);
	i = 0;
	coord = 0;
	if (!(coord = (t_fillit**)malloc(sizeof(t_fillit*) * 27)))
		return ;
	while (i < 27)
		coord[i++] = NULL;
	rid = read(fd, buffer, BUFF_SIZE);
	coord = ft_attribute(&coord, buffer, 0, 0);
	if (coord == 0)
		return ;
	deck = ft_deck(&coord);
	ft_test(&deck);
	return ;
}

int			main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit extern_file.txt\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY, 0);
	ft_manage(fd);
	return (0);
}
