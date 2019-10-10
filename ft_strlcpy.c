/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:21:00 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/09 15:21:57 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	unsigned int	i;
	char			*temp;

	temp = dst;
	i = 0;
	if (!dst || !src)
		return (0);
	while (i + 1 < dstsize && *src)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	while (*src++)
		i++;
	dst = temp;
	return (i);
}
