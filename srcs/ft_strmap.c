/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:36:56 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/22 10:48:49 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;

	ret = malloc((ft_strlen(s) + 1) * sizeof(char));
	
	while (*s)
	{
		*ret = (*f)(*s);
		s++;
		ret++;
	}
	return (ret);
}
