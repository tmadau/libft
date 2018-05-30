/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:25:05 by tmadau            #+#    #+#             */
/*   Updated: 2018/05/29 15:11:34 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	dest_len;
	int		i;

	dest_len = ft_strlen(s1);
	i = 0;
	while (dest_len < n && s2[i] != '\0')
	{
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}
