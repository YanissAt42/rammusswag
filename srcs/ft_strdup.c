/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:45:25 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 11:12:20 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char	*ft_strdup(const char *s1)
{
	char *buff;
	
	buff = malloc(strlen(s1)*sizeof(char));
	buff = ft_memcpy(buff, s1, strlen(s1));
	return (buff);
}
