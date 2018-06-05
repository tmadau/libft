/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:17:20 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/05 14:25:29 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*cntstr1;
	char	*cntstr2;

	cntstr1 = s1;
	cntstr2 = (char *)s2;
	while (*cntstr1)
		cntstr1++;
	while (*cntstr2)
	{
		*cntstr1 = *cntstr2;
		cntstr1++;
		cntstr2++;
	}
	*cntstr1 = '\0';
	return (s1);
}
