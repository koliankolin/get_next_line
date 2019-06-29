/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:26:18 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:45:26 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	int		len;
	char	*start;

	new = NULL;
	if (!s || !f)
		return (new);
	len = ft_strlen(s);
	if ((new = (char *)malloc(sizeof(char) * (len + 1))))
	{
		start = new;
		while (len--)
			*new++ = f(*s++);
		*new = 0;
		return (start);
	}
	return (new);
}
