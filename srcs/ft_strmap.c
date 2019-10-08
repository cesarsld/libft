/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:56:54 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/26 12:28:45 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *start;

	if (!s || !f || !(new = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	start = new;
	while (*s)
		*new++ = f(*s++);
	*new = 0;
	return (start);
}
