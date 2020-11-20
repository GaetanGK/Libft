/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:38:08 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/19 23:54:06 by Gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	res;

	res = n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		res = -res;
	}
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putnbr_fd(res % 10, fd);
	}
	else
	{
		ft_putchar_fd(res + '0', fd);
	}
}
