/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:40:36 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 17:48:59 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "../lib/libft.h"
void *memmove(void *s1, const void *s2, size_t n)
{
	const char *src;
	char *dest;

	src = s2;
	dest = s1;

	if (!n)
		return (s1);
	if (s1 <= s2)
		return ft_memcpy(s1, s2, n);
	src += n;
	dest += n;
	while (n--)
		*--dest = *--src;
	return (s1);
}
