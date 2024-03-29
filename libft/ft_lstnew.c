/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:04:41 by skale             #+#    #+#             */
/*   Updated: 2019/09/22 15:43:27 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*result;

	if ((result = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (!content)
		{
			result->content = NULL;
			result->content_size = 0;
		}
		else
		{
			if (!(result->content = ft_memalloc(content_size)))
			{
				free(result);
				return (NULL);
			}
			ft_memcpy(result->content, content, content_size);
			result->content_size = content_size;
		}
		result->next = NULL;
	}
	return (result);
}
