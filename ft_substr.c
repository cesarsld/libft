/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:59:00 by cjaimes           #+#    #+#             */
/*   Updated: 2019/10/09 15:01:59 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;

	if (!s || !(new = malloc((len + 1) * sizeof(char))))
		return (NULL);
	new[len] = 0;
	while (len-- != 0)
		new[len] = s[start + len];
	return (new);
}
