/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:06:25 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/27 15:23:27 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;
	size_t	i;

	i = ft_strlen(s1);
	if (!(cp = ft_strnew(i)))
		return (0);
	i = 0;
	while (s1[i])
	{
		cp[i] = s1[i];
		i++;
	}
	return (cp);
}
