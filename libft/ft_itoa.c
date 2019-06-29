/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:04:12 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:39:05 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int cnt;

	cnt = 0;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static char	*ft_get_nil(void)
{
	char *nil;

	if (!(nil = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	nil[0] = '0';
	nil[1] = 0;
	return (nil);
}

char		*ft_itoa(int n)
{
	int		cnt;
	char	*new;
	int		is_neg;

	if (n == -2147483648)
		return (ft_get_min_int());
	if (n == 0)
		return (ft_get_nil());
	is_neg = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	cnt = ft_count_digits(n);
	if (!(new = (char *)malloc(sizeof(char) * (cnt + 2))))
		return (NULL);
	new[0] = '-';
	if (!is_neg)
		(new[cnt--] = 0);
	else
		(new[cnt + 1] = 0);
	while (n)
	{
		new[cnt--] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (new);
}
