/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:59:23 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 14:09:04 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void	*ft_memcpy(void * s1, const void * s2, size_t n)
{
	char *dest;

	dest = s1;
	while (n--)
	{
		*(char *)s1 = *(char *)s2;
		s1 = (char *)s1 + 1;
		s2 = (char *)s2 + 1;
	}
	return (dest);
}
