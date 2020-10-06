/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:07:32 by skale             #+#    #+#             */
/*   Updated: 2019/09/21 16:30:30 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	k = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[k] = s2[i];
		i++;
		k++;
	}
	s1[k] = '\0';
	return (s1);
}
