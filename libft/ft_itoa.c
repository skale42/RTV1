/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:56:26 by skale             #+#    #+#             */
/*   Updated: 2019/09/21 14:58:36 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size(int n)
{
	int				size;

	size = 0;
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		size++;
	}
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				k;
	unsigned int	tmp;

	if (n < 0)
		k = -1;
	else
		k = 1;
	i = 1;
	if (!((str = (char *)malloc(sizeof(char) * ft_size(n) + 1))))
		return (NULL);
	tmp = k * n;
	if (tmp == 0)
		str[tmp] = '0';
	while (tmp > 0)
	{
		str[ft_size(n) - i++] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	if (k == -1)
		str[0] = '-';
	str[ft_size(n)] = '\0';
	return (str);
}
