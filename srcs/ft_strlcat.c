/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:30:47 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 16:14:30 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *dest;
	const char *source;
	size_t n;
	size_t len;

	dest = dst;
	source = src;
	n = size;
	while (n-- != 0 && *dest != '\0')
		dest++;
	len = dest - dst;
	n = size - len;
	if (n == 0)
		return(len + ft_strlen(source));
	while (*source != '\0')
	{
		if (n != 1)
		{
			*dest++ = *source;
			n--;
		}
		source++;
	}
	*dest = '\0';
	return (len + (source - src));
}
