/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:10:54 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/10 16:55:42 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{

	if (lst->next)
		return (ft_lstlast(lst->next));
	return (lst);
}
