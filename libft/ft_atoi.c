/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:18:41 by epouros           #+#    #+#             */
/*   Updated: 2018/12/03 19:55:54 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (((c >= 9 && c <= 13) || (c == 32)) ? 1 : 0);
}

static int	ft_isnumber(char c)
{
	return ((c <= '9' && c >= '0') ? 1 : 0);
}

int			ft_atoi(const char *str)
{
	int flag;
	int res;

	res = 0;
	while (ft_isspace(*str))
		str++;
	flag = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isnumber(*str))
		res = res * 10 + (*str++ - '0');
	return (res * flag);
}
