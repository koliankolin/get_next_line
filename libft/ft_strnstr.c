/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:29:22 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 14:04:11 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_str(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n && *s1 && *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (!*s2)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!s2[0])
		return ((char *)s1);
	if (!n)
		return (NULL);
	while (n && *s1)
	{
		if (*s1 == *s2 && (find_str(s1, s2, n)))
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
