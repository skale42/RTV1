/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:06:00 by skale             #+#    #+#             */
/*   Updated: 2019/09/21 14:33:29 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *nptr)
{
	int				i;
	long long int	nr;
	int				k;
	int				s;

	i = 0;
	nr = 0;
	k = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
		k = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		s = nptr[i] - '0';
		if (k == 1 && (nr > LONG_MAX / 10 || (nr == LONG_MAX / 10 && s > 7)))
			return (-1);
		if (k == -1 && (nr > LONG_MAX / 10 || (nr == LONG_MAX / 10 && s > 8)))
			return (0);
		nr = nr * 10 + s;
		i++;
	}
	return (nr * k);
}
