/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:31:09 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/16 17:25:34 by Gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sourc;

	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*dest++ = *sourc++;
	return (dst);
}
