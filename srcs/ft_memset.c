/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:51:14 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 17:11:29 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = b;
	while (len--)
		*s++ = (unsigned char)c;
	return (b);
}
