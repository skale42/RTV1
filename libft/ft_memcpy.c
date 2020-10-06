/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:38:46 by skale             #+#    #+#             */
/*   Updated: 2019/09/21 14:43:15 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str1;

	i = 0;
	str = (unsigned char*)dst;
	str1 = (unsigned char*)src;
	if (str == '\0' && str1 == '\0')
		return (0);
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dst);
}
