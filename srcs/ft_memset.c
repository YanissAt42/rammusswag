/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:51:14 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 13:18:38 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"
void *ft_memset(void *b, int c, size_t len)
{
	if (len > 0)
	{
		unsigned char *s;

		s = b;
		while (len--)
		{
			*s++ = (char)c;
		}
	}
	return b;
}
