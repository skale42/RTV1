/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <skale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:19:39 by skale             #+#    #+#             */
/*   Updated: 2019/10/03 16:12:17 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s || !(res = ft_memalloc(len + 1)))
		return (NULL);
	res = ft_strncpy(res, (char*)s + start, len);
	return (res);
}
