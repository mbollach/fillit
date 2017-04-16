/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:01:44 by mbollach          #+#    #+#             */
/*   Updated: 2017/04/13 22:25:00 by jkorchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 546

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"

typedef	struct	s_fillit
{
	int			abs;
	int			ord;
}				t_fillit;

typedef	struct	s_map
{
	t_fillit	**coord;
	int			len;
	int			side;
	int			t_num;
}				t_map;

t_fillit		*ft_check_file(char const*file, unsigned int i, int l);
int				ft_tetri_len(t_fillit **coord);
int				ft_side(t_fillit **coord, int len);
t_fillit		ft_fst_point(char **sarray);
t_fillit		ft_lst(char **sarray, t_fillit *fst, t_fillit *lst);
int				ft_fit(t_map *deck);
void			ft_test(t_map *deck);

#endif
