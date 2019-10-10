/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:41:26 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/10 16:57:15 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *first;
	t_list *new;
	t_list *new1;
	t_list *elem;

	elem = f(lst);
	if (!(new = ft_lstnew(elem->content)))
		return (NULL);
	first = new;
	while (lst)
	{
		elem = f(lst);
		if (!(new1 = ft_lstnew(elem->content)))
			return (NULL);
		new->next = new1;
		new = new1;
		lst = lst->next;
	}
	return (first);
}
