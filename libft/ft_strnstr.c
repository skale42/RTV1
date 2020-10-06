/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:11:36 by skale             #+#    #+#             */
/*   Updated: 2019/09/21 16:01:47 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	int		r;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)&str1[0]);
	while (str1[i] != '\0' && i < len)
	{
		if (str1[i] == str2[0])
		{
			r = ft_strncmp(str2, (char *)&str1[i], ft_strlen(str2));
			if ((r == 0) && ((i + ft_strlen(str2)) <= len))
				return ((char*)&str1[i]);
		}
		i++;
	}
	return (0);
}
