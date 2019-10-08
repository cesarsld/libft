/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:46:26 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/25 11:19:28 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	char		*d;
	const char	*s;
	size_t		size_dest;
	size_t		n;

	n = dst_size;
	d = dst;
	s = src;
	while (n-- != 0 && *d)
		d++;
	size_dest = d - dst;
	n = dst_size - size_dest;
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
