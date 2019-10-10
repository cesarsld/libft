/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:38:14 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/09 14:27:51 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (*src)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (dst - i);
}
