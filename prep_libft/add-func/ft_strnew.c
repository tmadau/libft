/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 14:35:37 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/02 16:47:22 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;

	string = (char *)malloc(sizeof(*string) * size + 1);
	if (string == NULL)
		return (NULL);
	else
	{
		ft_memset(string, 0, ft_strlen(string));
		return (string);
	}
}
