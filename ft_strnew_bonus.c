/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:39:11 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/09 14:28:30 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_bzero((void *)str, size + 1);
	return (str);
}
