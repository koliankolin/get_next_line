/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:26:55 by epouros           #+#    #+#             */
/*   Updated: 2018/12/03 20:00:55 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict dst,
								const char *restrict src, size_t n)
{
	char *start;

	start = dst;
	while (*dst)
		dst++;
	while (n-- && *src)
		*dst++ = *src++;
	*dst = 0;
	return (start);
}
