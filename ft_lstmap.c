/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:41:35 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/16 20:35:17 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *bgn;
	t_list *tmp;
	t_list *nw;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	if (!(nw = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	bgn = nw;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = f(lst);
		if (!(nw->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		nw = nw->next;
		lst = lst->next;
	}
	return (bgn);
}
