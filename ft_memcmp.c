/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:35:31 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/19 23:47:46 by Gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)src1;
	ptr2 = (unsigned char *)src2;
	if (!n)
		return (0);
	while (--n && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
	}
	return ((int)(*ptr1 - *ptr2));
}
