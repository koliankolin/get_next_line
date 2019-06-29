/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:37:17 by epouros           #+#    #+#             */
/*   Updated: 2018/11/25 15:31:39 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	return (((c >= 0101 && c <= 0132)
			|| (c <= 0172 && c >= 0141)) ? 1 : 0);
}