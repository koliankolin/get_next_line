/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:10:39 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 14:05:34 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*str;
	char			*new;
	unsigned int	start_c;

	str = NULL;
	if (!s)
		return (str);
	if ((new = (char *)malloc(sizeof(char) * (len + 1))))
	{
		start_c = start;
		str = new;
		while (start < (len + start_c))
			*new++ = s[start++];
		*new = 0;
	}
	return (str);
}
