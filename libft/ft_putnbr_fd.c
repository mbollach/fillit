/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 13:47:21 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/06 18:27:17 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > -2147483648)
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		if (n >= 10)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putchar_fd(((n % 10) + 48), fd);
		}
		if (n >= 0 && n < 10)
		{
			ft_putchar_fd((n + 48), fd);
		}
	}
	else
		ft_putstr_fd("-2147483648", fd);
}
