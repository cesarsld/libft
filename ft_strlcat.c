/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:46:26 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/08 13:23:43 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		size_dest;
	size_t		n;

	n = dstsize;
	d = dst;
	s = src;
	while (n-- != 0 && *d)
		d++;
	size_dest = d - dst;
	n = dstsize - size_dest;
	if (n == 0)
		return (size_dest + ft_strlen(src));
	while (*s)
	{
		if (n-- != 1)
			*d++ = *s;
		s++;
	}
	*d = '\0';
	return (size_dest + (s - src));
}
