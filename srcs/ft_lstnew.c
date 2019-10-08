/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 15:56:57 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/27 17:43:14 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_ele;
	void	*content_cpy;

	if(!(new_ele = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(content_cpy = ft_memalloc(content_size)))
			return (NULL);
		new_ele->content = ft_memcpy(content_cpy, content, content_size);
	}
	else
	{
		new_ele->content_size = 0;
		new_ele->content = NULL;
	}
	return (new_ele);
}
