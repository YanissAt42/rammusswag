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

char	*ft_strncpy(char *__restrict__ s1, const char *__restrict__ s2, size_t n)
{
	return(ft_memcpy(s1, s2, n));
}
