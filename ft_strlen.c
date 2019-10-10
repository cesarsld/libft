/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:45:23 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/10 17:37:55 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		ft_strlen(const char *str)
// {
// 	const char *start;

// 	start = str;
// 	while (*str)
// 		str++;
// 	return (str - start);
// }

int		ft_strlen(const char *str)
{
	size_t			res;
	unsigned int	*pt;

	res = 0;
	pt = (unsigned int *)str;
	while (*pt)
	{
		if (!(*pt & 0x000000FF))
			return (res);
		if (!(*pt & 0x0000FF00))
			return (res + 1);
		if (!(*pt & 0x00FF0000))
			return (res + 2);
		if (!(*pt & 0xFF000000))
			return (res + 3);
		res += 4;
		pt++;
	}
	return (0);
}
