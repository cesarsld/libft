/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:05:03 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/26 17:00:28 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**create_tab(int count, const char *str, char c)
{
	char		**tab;
	int			i;
	const char	*cpy;

	if (!(tab = malloc((count + 1) * sizeof(char*))))
			return (NULL);
	while (*str && !(i = 0))
	{
		while (*str == c)
			str++;
		cpy = str;
		if (*str)
		{
			while (*str && *str++ != c)
				i++;
			if (!((*tab) = ft_strnew(i)))
				return (NULL);
			*tab = ft_strncpy(*tab, cpy, i);
			tab++;
		}
	}
	*tab = 0;
	return (tab - count);
}

char	**ft_strsplit(char const *s, char c)
{
	int			count;
	const char	*cpy;

	if (!s)
		return (NULL);
	cpy = s;
	count = 0;
	while (*cpy)
	{
		while (*cpy == c)
			cpy++;
		if (*cpy)
		{
			while (*cpy && *cpy != c)
				cpy++;
			count++;
		}
	}
	return (create_tab(count, s, c));
}
