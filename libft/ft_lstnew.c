/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:54:57 by epouros           #+#    #+#             */
/*   Updated: 2018/12/16 15:38:00 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	size_t	tmp;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content_size = 0;
		new->content = NULL;
		return (new);
	}
	if (!(new->content = (void *)malloc(sizeof(content_size))))
		return (NULL);
	tmp = content_size;
	new->content_size = content_size;
	ft_memmove(new->content, content, content_size);
	new->next = NULL;
	return (new);
}
