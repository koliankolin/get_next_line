/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 22:57:07 by epouros           #+#    #+#             */
/*   Updated: 2018/11/21 23:55:18 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char a;
	unsigned char *str;
	unsigned char *start;

	str = (unsigned char *)b;
	start = str;
	a = (unsigned char)c;
	while (len--)
		*str++ = a;
	return ((void *)start);
}
