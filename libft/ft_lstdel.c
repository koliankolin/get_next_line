/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:28:02 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:20:41 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *l_next;

	if (!alst || !del || !*alst)
		return ;
	lst = *alst;
	while (lst)
	{
		l_next = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = l_next;
	}
	*alst = NULL;
}
