/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:40:15 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/20 09:05:57 by Gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_ptr(char **ptr)
{
	size_t	i;

	i = 0;
	if (ptr)
	{
		while (ptr[i])
			free(ptr[i++]);
		free(ptr);
	}
	return (0);
}

static size_t	ft_strllen(char const *s, size_t start, char c)
{
	size_t	i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		i++;
		start++;
	}
	return (i);
}

static	size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			res++;
		while (s[i] != c && s[i])
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	words;

	words = ft_countword(s, c);
	i = 0;
	j = 0;
	k = 0;
	if (!(res = malloc((words + 1) * sizeof(char *))))
		return (ft_free_ptr(res));
	while (i < words)
	{
		k += j;
		while (s[k] == c)
			k++;
		j = ft_strllen(s, k, c);
		if (!(res[i] = ft_substr(s, k, j)))
			return (ft_free_ptr(res));
		i++;
	}
	res[words] = 0;
	return (res);
}
