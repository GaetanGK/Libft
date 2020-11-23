/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:06:11 by Gkatounk          #+#    #+#             */
/*   Updated: 2020/11/23 18:26:04 by gkatounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	res = NULL;
	while (lst && f)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp->content)
		{
			ft_lstclear(&res, del);
			return (res);
		}
		ft_lstadd_back(&res, temp);
		lst = lst->next;
	}
	return (res);
}
