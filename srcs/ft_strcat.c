/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:12:07 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 12:51:00 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
	ft_memcpy((s1 + ft_strlen(s1)), s2, (ft_strlen(s2)+1));
	return (s1);
}
