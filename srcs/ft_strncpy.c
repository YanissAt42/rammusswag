/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:53:03 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 12:02:00 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char	*ft_strncpy(char *restrict s1, const char *restrict s2, size_t n)
{
	return(ft_memcpy(s1, s2, n));
}
