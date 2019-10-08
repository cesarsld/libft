/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:12:33 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/25 11:17:07 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = n;
	while (n != 0)
	{
		if (*src)
			*dst = *src++;
		else
			*dst = '\0';
		dst++;
		n--;
	}
	return (dst - i);
}
