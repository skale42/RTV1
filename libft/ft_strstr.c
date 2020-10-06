/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:52:00 by skale             #+#    #+#             */
/*   Updated: 2019/09/21 16:35:14 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)&str1[0]);
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[0])
		{
			if (ft_strncmp(str2, (char *)&str1[i], ft_strlen(str2)) == 0)
				return ((char*)&str1[i]);
		}
		i++;
	}
	return (0);
}
