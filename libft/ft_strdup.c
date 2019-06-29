/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:25:26 by epouros           #+#    #+#             */
/*   Updated: 2018/12/03 19:46:06 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *start;
	char *copy;

	if ((copy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
	{
		start = copy;
		while (*str)
			*copy++ = *str++;
		*copy = 0;
		return (start);
	}
	return (NULL);
}
