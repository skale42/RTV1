/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:39:44 by skale             #+#    #+#             */
/*   Updated: 2019/09/22 15:27:23 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	n;
	int		k;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	n = ft_strlen(s);
	if (i == n)
		return (ft_strnew(0));
	while (s[n - 1] == ' ' || s[n - 1] == '\n' || s[n - 1] == '\t')
		n--;
	str = ft_strnew(n - i);
	if (str == NULL)
		return (NULL);
	while (i < n)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
