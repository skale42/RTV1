/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:43:54 by skale             #+#    #+#             */
/*   Updated: 2019/09/22 15:53:04 by skale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_del(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*prev;
	t_list	*rslt;

	prev = NULL;
	rslt = NULL;
	if (f)
		while (lst)
		{
			if (!(elem = f(lst)))
			{
				if (rslt)
					ft_lstdel(&rslt, &ft_del);
				return (NULL);
			}
			if (prev)
				prev->next = elem;
			else
				rslt = elem;
			lst = lst->next;
			prev = elem;
		}
	return (rslt);
}
