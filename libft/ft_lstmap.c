/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:41:03 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 15:17:39 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*del_lst(t_list **lst)
{
	t_list	*tmp;
	t_list	*l_next;

	if (!*lst)
		return (NULL);
	tmp = *lst;
	while (tmp)
	{
		l_next = tmp->next;
		free(tmp->content);
		free(tmp);
		tmp = l_next;
	}
	*lst = NULL;
	return (*lst);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	if (!(new = f(lst)))
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = f(lst)))
			return (del_lst(&tmp));
		lst = lst->next;
		new = new->next;
	}
	return (tmp);
}
