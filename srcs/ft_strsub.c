/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:12:41 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/22 11:19:53 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*ret;
	unsigned int		end;

	end = start + len;
	ret = malloc(len * sizeof(char));
	while (start < end)
	{
		ret[len] = s[end];
		end--;
		len--;
	}
	return (ret);
}
