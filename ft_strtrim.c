/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:07:44 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/19 23:54:46 by Gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;

	j = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_strchr((char *)set, s1[i]))
		i++;
	while (j && j > i && ft_strchr((char *)set, s1[j]))
		j--;
	res = ft_substr(s1, i, j - i + 1);
	return (res);
}
