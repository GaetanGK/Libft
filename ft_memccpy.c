/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:47:03 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/20 18:21:31 by gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sourc;
	size_t			i;

	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	i = 0;
	if (!dest && !sourc)
		return (0);
	while (n--)
	{
		dest[i] = sourc[i];
		if (sourc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
