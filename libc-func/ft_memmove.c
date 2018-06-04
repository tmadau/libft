/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:58:00 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/04 17:21:52 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	csbyte[len];

	ft_memcpy(csbyte, src, len);
	ft_memcpy(dst, csbyte, len);
	return (dst);
}

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	unsigned char	*csbyte1;
	unsigned char	*csbyte2;

	i = 0;
	csbyte1 = (unsigned char *)dst;
	csbyte2 = (unsigned char *)src;
	while (i < len)
	{
		csbyte1[i] = csbyte2[i];
		i++;
	}
	return (dst);
}*/
