/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:05:23 by epouros           #+#    #+#             */
/*   Updated: 2018/12/01 14:12:27 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(const char *s, char c)
{
	int cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			cnt++;
			while (*s != c && *s)
				s++;
		}
	}
	return (cnt);
}

static void		ft_rem_sp(const char **s, char c)
{
	while (**s == c)
		(*s)++;
}

static int		ft_count_letters(const char **s, char c)
{
	int cnt;

	cnt = 0;
	while (**s != c && *((*s)++))
		cnt++;
	return (cnt);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**strs[2];
	const char	*tmp;
	int			arr[3];

	if (!s)
		return (NULL);
	arr[0] = ft_count_word(s, c);
	if (!(strs[0] = (char **)malloc(sizeof(char *) * (arr[0] + 1))))
		return (NULL);
	strs[1] = strs[0];
	while (arr[0]--)
	{
		ft_rem_sp(&s, c);
		tmp = s;
		arr[1] = ft_count_letters(&s, c);
		arr[2] = arr[1];
		if (!(*strs[0] = (char *)malloc(sizeof(char) * (arr[1] + 1))))
			return (ft_del_arr(&(strs[1])));
		while (arr[1]--)
			*((*strs[0])++) = *tmp++;
		**strs[0] = 0;
		*(strs[0]++) -= arr[2];
	}
	*strs[0] = NULL;
	return (strs[1]);
}
