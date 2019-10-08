/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 17:00:54 by cjaimes           #+#    #+#             */
/*   Updated: 2019/07/26 17:29:16 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*string_zero()
{
	char *res;

	if (!(res = ft_strnew(1)))
		return (NULL);
	*res = '0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	tab[11];
	char	*res;
	int		sign;
	int		i;
	int		j;

	if (n == 0)
		return (string_zero());
	j = 0;
	i = 0;
	sign = n < 0 ? -1 : 1;
	while (n != 0)
	{
		tab[i++] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	if (sign == -1)
		tab[i++] = '-';
	if (!(res = ft_strnew(i)))
		return (NULL);
	while (i-- > 0)
		res[j++] = tab[i];
	return (res);
}
