/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:50:42 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 15:15:07 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strrchr(const char *s, int c)
{
	int		flag;
	const char	*pos;

	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			flag = 1;
			pos = s;
		}
		s++;
	}
	if (flag == 1)
		return ((char *)pos);
	return (NULL);
}
