/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:41:56 by epouros           #+#    #+#             */
/*   Updated: 2018/12/03 19:59:24 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *dst_c;
	unsigned char *src_c;
	unsigned char *start;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	start = dst_c;
	while (n--)
		*dst_c++ = *src_c++;
	return ((void *)start);
}
