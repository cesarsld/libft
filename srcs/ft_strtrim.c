/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:35:39 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/26 14:52:39 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_white_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t len;
	char *new;

	if (!s)
		return (NULL);
	while (is_white_space(*s))
		s++;
	if (*s == 0)
	{
		if ((new = ft_strnew(0)))
			return (new);
		else
			return (NULL);
	}
	len = ft_strlen(s);
	while (is_white_space(s[len - 1]))
		len--;
	if (!(new = ft_strsub(s, 0, len)))
		return (NULL);
	return (new);
}
