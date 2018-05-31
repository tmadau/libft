/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:46:50 by tmadau            #+#    #+#             */
/*   Updated: 2018/05/31 17:43:03 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = dst;
	while (i < n)
	{
		str[i] = (((unsigned char*)src)[i]);
		if (((unsigned char)c) == str[i])
			return (str + i + 1);
		i++;
	}
	return (NULL);
}
