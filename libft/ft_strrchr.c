/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:37:52 by skale             #+#    #+#             */
/*   Updated: 2019/09/20 13:50:15 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	k;

	str = (char *)s + ft_strlen(s);
	k = (char)c;
	while (str >= s)
	{
		if (*str == k)
			return (str);
		str--;
	}
	return (0);
}
