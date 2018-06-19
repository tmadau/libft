/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:31:30 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/05 17:37:00 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*start_str;

	i = 0;
	start_str = (int *)malloc(sizeof(int) * char);
	while (i < start_str)
	{
		start_str[i] = f(s[i]);
		i++;
	}
	return (start_str);
}
