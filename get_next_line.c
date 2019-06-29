/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 15:27:04 by epouros           #+#    #+#             */
/*   Updated: 2018/12/16 15:34:37 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static t_list	*ft_get_file(t_list **file, const int fd)
{
	t_list		*tmp;
	t_struct	*data;

	tmp = *file;
	if (!(data = (t_struct *)malloc(sizeof(t_struct))))
		return (NULL);
	while (tmp)
	{
		if (((t_struct *)tmp->content)->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	data->str = ft_strnew(0);
	data->start = data->str;
	data->fd = fd;
	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp->content = data;
	tmp->next = NULL;
	tmp->content_size = sizeof(data);
	ft_lstadd(file, tmp);
	return (tmp);
}

static char		*ft_cpy_break(char **str)
{
	size_t	i;
	char	*line;

	i = 0;
	while ((*str)[i] != '\n' && (*str)[i])
		i++;
	line = ft_strsub(*str, 0, i);
	(ft_strchr(*str, '\n')) ? (*str += i + 1) : (*str += i);
	return (line);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*file;
	t_list			*tmp;
	char			buf[BUFF_SIZE + 1];
	ssize_t			ret;

	if (fd < 0 || !line)
		return (-1);
	tmp = ft_get_file(&file, fd);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		buf[ret] = 0;
		STRING = ft_strjoin(STRING, buf);
		free(START);
		START = STRING;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(STRING))
		return (0);
	*line = ft_cpy_break(&STRING);
	return (1);
}
