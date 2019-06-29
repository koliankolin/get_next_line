/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:45:26 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 14:13:23 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (((c >= 9 && c <= 13) || c == 32) ? 1 : 0);
}

static char	*get_nil(void)
{
	char *new;

	if (!(new = (char *)malloc(sizeof(char) * 1)))
		return (NULL);
	new[0] = 0;
	return (new);
}

static void	ft_sub_ft(const char **s)
{
	while (ft_isspace(**s))
		(*s)++;
}

char		*ft_strtrim(const char *s)
{
	char	*new;
	char	*start;
	char	*s_c;
	int		len;

	len = 0;
	start = NULL;
	if (!s)
		return (start);
	ft_sub_ft(&s);
	if (!*(s_c = (char *)s))
		return (get_nil());
	while (*s++)
		len++;
	s -= 2;
	while (ft_isspace(*s--))
		len--;
	if ((new = (char *)malloc(sizeof(char) * (len + 1))))
	{
		start = new;
		while (len--)
			*new++ = *s_c++;
		*new = 0;
	}
	return (start);
}
