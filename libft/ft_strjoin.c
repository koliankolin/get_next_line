/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:34:21 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:42:37 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	char	*start;
	int		len;

	start = NULL;
	if (!s1 || !s2)
		return (start);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((new = (char *)malloc(sizeof(char) * (len + 1))))
	{
		start = new;
		while (*s1)
			*new++ = *s1++;
		while (*s2)
			*new++ = *s2++;
		*new = 0;
	}
	return (start);
}
