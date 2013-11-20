/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:49:26 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 13:52:14 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char  *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	ft_memcpy((s1 + ft_strlen(s1)), s2, n);
	return (s1);
}
