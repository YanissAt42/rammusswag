/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:21:42 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/22 11:39:55 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *ret;

	ret = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (*s1)
	{
		*ret = *s1;
		ret++;
		s1++;
	}
	s1++;
	while (*s2)
	{
		*ret = *s2;
		ret++;
		s2++;
	}
	ret++;
	*ret = '\0';
	return (ret);
}
