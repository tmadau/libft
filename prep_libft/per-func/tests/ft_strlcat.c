/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:50:09 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/13 10:16:37 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		join;

	join = 0;
	while (*dst)
	{
		join++;
		dst++;
	}
	if (join >= dstsize)
		return (dstsize + ft_strlen((char *)src));
	ft_strncat(dst, src, dstsize - join - 1);
	return (join + ft_strlen((char *)src));
}
