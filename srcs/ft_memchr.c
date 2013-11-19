/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:05:11 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 18:34:52 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *str;

	str = s;
	
	while(n--)
	{
		if (*str == (char)c)
			return ((void *)(str));
		str++;
			
	}
	return (NULL);
}
