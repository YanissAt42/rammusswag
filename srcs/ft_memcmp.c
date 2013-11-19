/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:09:33 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 19:21:21 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char str1;
	char str2;

	while (n--)
	{
		str1 = *(char *)s1;
		str2 = *(char *)s2;
		s1++;
		s2++;
		if (str1 != str2)
			return (str1-str2);
	}
	return (0);
}
