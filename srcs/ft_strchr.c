/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:28:46 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 14:41:26 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strchr(const char *s, int c)
{
	printf("%c\n", (char)c);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
