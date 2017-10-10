/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 19:54:17 by igornea           #+#    #+#             */
/*   Updated: 2017/09/30 19:56:48 by igornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*i;

	if (lst && f)
	{
		new = f(lst);
		i = new;
		while (lst->next)
		{
			i->next = f(lst->next);
			i = i->next;
			lst = lst->next;
		}
		return (new);
	}
	return (0);
}
