/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:02:23 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 14:02:25 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *new;
	unsigned char *start;

	start = NULL;
	if ((new = (unsigned char *)malloc(sizeof(unsigned char) * size)))
	{
		start = new;
		while (size--)
			*new++ = 0;
	}
	return ((void *)start);
}
