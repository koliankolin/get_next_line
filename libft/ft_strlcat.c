/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:23:34 by epouros           #+#    #+#             */
/*   Updated: 2018/12/03 20:00:37 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
								const char *restrict src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (!n)
		return (dlen + ft_strlen((char *)src));
	else
	{
		while (*s)
		{
			if (n-- == 1)
				break ;
			*d++ = *s++;
		}
		*d = 0;
		return (dlen + (ft_strlen((char *)src)));
	}
}
