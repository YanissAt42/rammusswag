/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:29:45 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 18:08:40 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strnew(size_t size)
{
	char *str;

	if ((str = malloc(size * sizeof(char))) == NULL)
		return (NULL);
	size++;
	while (size > 0)
	{
		str[size] = '\0';
		printf("%c\n", str[size]);
		size--;
	}
	return (str);
}
