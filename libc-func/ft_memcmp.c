/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:23:49 by tmadau            #+#    #+#             */
/*   Updated: 2018/05/30 11:29:52 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*srcmem;
	char		*dstmem;

	i = 0;
	srcmem = (unsigned char*)s2;
	dstmem = (unsigned char*)s1;
	while (i < n)
	{
		if (dstmem != srcmem)
			return (dstmem - srcmem);
		i++;
	}
	return (0);
}

int		main(void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest, "heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcmp(dest, src, strlen(src)+1);
	printf("After memcmp dest = %s\n", dest);

	return (0);
}
