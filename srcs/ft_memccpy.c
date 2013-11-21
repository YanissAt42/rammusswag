/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:59:23 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 15:04:08 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char *dest;
	const char *src;

	dest = s1;
	src = s2;
	while (n--)
	{
		ft_memset(dest, *src, 1);
		if (*src == (char)c)
			return (++dest);
		dest++;
		src++;
	}
	return (NULL);
}
