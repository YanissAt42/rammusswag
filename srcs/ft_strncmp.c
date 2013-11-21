/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:14:14 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 16:50:09 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			if (*s1 < *s2)
				return (-1);
			else if (*s1 > *s2)
				return (1);
		}
		else if (*s1 == '\0')
			return (0);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
