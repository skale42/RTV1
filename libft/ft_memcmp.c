/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:29:57 by skale             #+#    #+#             */
/*   Updated: 2019/09/19 14:59:43 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while (str[i] == str2[i] && i < n - 1)
		i++;
	return ((int)(str[i] - str2[i]));
}
