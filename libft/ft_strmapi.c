/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:35:09 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:45:56 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	char	*start;
	int		cnt;
	int		len;

	new = NULL;
	if (!s || !f)
		return (new);
	len = ft_strlen(s);
	cnt = 0;
	if ((new = (char *)malloc(sizeof(char) * (len + 1))))
	{
		start = new;
		while (len--)
			*new++ = f(cnt++, *s++);
		*new = 0;
		return (start);
	}
	return (new);
}
