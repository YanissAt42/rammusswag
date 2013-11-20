/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:29:45 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 15:37:56 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

char *ft_strnew(size_t size)
{
	char *str;

	str = malloc(size * sizeof(char));
	str[size] = '\0';
	str[size -1] = '\n';
	return (str);
}
