/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:22:38 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 13:40:14 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_min_int(void)
{
	char	*new;
	long	nb;
	int		ind;

	ind = 11;
	nb = 2147483648;
	if (!(new = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	new[0] = '-';
	new[ind] = 0;
	while (nb)
	{
		new[--ind] = (nb % 10 + '0');
		nb /= 10;
	}
	return (new);
}
