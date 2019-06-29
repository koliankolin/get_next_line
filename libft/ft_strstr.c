/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:08:47 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 14:04:52 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *tmp;
	char *tmpn;

	tmpn = (char *)needle;
	if (!needle[0])
		return ((char *)haystack);
	while (*haystack)
	{
		tmp = (char *)haystack;
		while (*haystack++ == *needle++)
			if (*needle == 0)
				return (tmp);
		haystack = tmp;
		needle = tmpn;
		haystack++;
	}
	return (NULL);
}
