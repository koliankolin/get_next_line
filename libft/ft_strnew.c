/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:36:14 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:48:25 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;
	char *start;

	start = NULL;
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (start);
	start = new;
	while (size--)
		*new++ = 0;
	*new = 0;
	return (start);
}
