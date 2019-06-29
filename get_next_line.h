/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 15:35:15 by epouros           #+#    #+#             */
/*   Updated: 2018/12/16 15:35:28 by epouros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/fcntl.h>
# define RETURN(x) if (x) return (-1);
# define STRING ((t_struct *)tmp->content)->str
# define START ((t_struct *)tmp->content)->start
# define BUFF_SIZE 9

int				get_next_line(const int fd, char **line);
typedef struct	s_struct
{
	char	*str;
	char	*start;
	int		fd;
}				t_struct;

#endif
