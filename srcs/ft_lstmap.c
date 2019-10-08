/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:41:26 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/29 10:37:34 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *new1;
	t_list *elem;

	if (lst)
	{
		elem = f(lst);
		if(!(new = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
	}
	else
		return (NULL);
	while (lst)
	{
		elem = f(lst);
		if(!(new1 = ft_lstnew(elem-> content, elem->content_size)))
			return (NULL);
		new->next = new1;
		new = new1;
		lst = lst->next;
	}
	return (new);
}
