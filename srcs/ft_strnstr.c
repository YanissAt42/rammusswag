/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:36:56 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 16:14:56 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strnstr(const char *s1,  const char *s2, size_t n)
{
	char c;
	char sc;
	size_t len;

	if ((c = *s2++) != '\0')
	{
		len = ft_strlen(s2);
		while (ft_strncmp(s1, s2, len))
		{
			while (sc != c)
			{
				if ((sc = *s1++) == '\0' || n-- < 1)
					return (NULL);
			}
			if (len > n)
				return (NULL);
		}
		s1--;
	} 
	return ((char *)s1);
}
