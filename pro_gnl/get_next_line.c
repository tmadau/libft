/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 12:36:21 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/25 16:26:27 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		line_checked(int fd, char **row, char **str)
{
	t_type		read;

	read.index = 0;
	while (str[fd][read.index] != '\n' && str[fd][read.index] != '\0')
		read.index++;
	if (str[fd][read.index] == '\0')
	{
		*row = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	else if (str[fd][read.index] == '\n')
	{
		*row = ft_strsub(str[fd], 0, read.index);
		read.store = ft_strdup(&str[fd][read.index + 1]);
		free(str[fd]);
		str[fd] = read.store;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_type	read_fd;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((read_fd.ret = read(fd, read_fd.buff, BUFF_SIZE)) > 0)
	{
		read_fd.buff[read_fd.ret] = '\0';
		if (read_fd.stock[fd] == NULL)
			read_fd.stock[fd] = ft_strnew(1);
		read_fd.store = ft_strjoin(read_fd.stock[fd], read_fd.buff);
		free(read_fd.stock[fd]);
		read_fd.stock[fd] = read_fd.store;
		if (ft_strchr(read_fd.buff, '\n'))
			break ;
	}
	if (read_fd.ret < 0)
		return (-1);
	else if (read_fd.ret == 0 && (read_fd.stock[fd] == NULL
				|| read_fd.stock[fd][0] == '\0'))
		return (0);
	return (line_checked(fd, line, read_fd.stock));
}
