/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:43:52 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/19 23:38:08 by Gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t		res;
	long int	nbr;

	nbr = n;
	res = 0;
	if (nbr < 0)
	{
		res++;
		nbr = -nbr;
	}
	if (!nbr)
		res++;
	while (nbr)
	{
		if (nbr / 10)
			res++;
		else if (nbr)
			res++;
		nbr /= 10;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;
	size_t	size;
	long	nbr;

	nbr = n;
	size = ft_size(n);
	if (!(res = malloc((size + 1) * sizeof(char))))
		return (0);
	res[size--] = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		res[0] = '-';
	}
	if (!nbr)
		res[0] = '0';
	while (nbr)
	{
		if (nbr / 10)
			res[size--] = (nbr % 10) + '0';
		else if (nbr)
			res[size--] = nbr + '0';
		nbr /= 10;
	}
	return (res);
}
