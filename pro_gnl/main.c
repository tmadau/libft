/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:30:49 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/25 16:30:54 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
		if (line)
			ft_strdel(&line);
	}
	if (line)
		free(line);
	close(fd);
	//sleep(60);
	return (0);
}
