/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 15:56:57 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/09 15:33:14 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ele;

	if (!(new_ele = ft_memalloc(sizeof(t_list))))
		return (NULL);
	new_ele->content = content;
	new_ele->next = NULL;
	return (new_ele);
}
