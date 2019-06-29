/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:51:38 by epouros           #+#    #+#             */
/*   Updated: 2018/11/27 21:24:37 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char c_c;
	char start;

	c_c = (char)c;
	start = *str;
	while (*str)
		str++;
	while (*str != start)
	{
		if (*str-- == c_c)
			return ((char *)++str);
	}
	if (*str == c_c)
		return ((char *)str);
	return (NULL);
}
