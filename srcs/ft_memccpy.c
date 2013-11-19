/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:59:23 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 16:35:10 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	unsigned char *dest;
	const unsigned char *src;

	//tf = (char)c;
	dest = s1;
	src = s2;
//	printf("%c %d\n", tf, c);
	while (n--)
	{
		ft_memset(s1, *src, 1);
		s1++;
		src++;
		if (*src  == (char)c)
		return (s1);
	}
	return (NULL);
}
