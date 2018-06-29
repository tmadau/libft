/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:34:40 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/28 17:06:29 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
    int		fd;
    int     i;
    char	*line;

    i = 1;
    (void)argc;
    while (argv[i])
    {
        fd = open(argv[i], O_RDONLY);
        while ((get_next_line(fd, &line) == 1))
        {
            printf("%s\n", line);
            if (line)
                ft_strdel(&line);
        }
        if (line)
            free(line);
        close(fd);
        i++;
    }
    return (0);
}
