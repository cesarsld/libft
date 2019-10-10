/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:49:59 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/09 14:28:33 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

int		check_valid_needle1(const char *haystack, const char *needle)
{
	while (*haystack && *needle)
		if (*haystack++ != *needle++)
			return (0);
	if (!*needle)
		return (1);
	return (0);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
			if (check_valid_needle1(haystack, needle))
				return ((char *)haystack);
		haystack++;
	}
	return (0);
}
