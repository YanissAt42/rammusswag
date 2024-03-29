/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:44:14 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 17:10:05 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void *ft_memalloc(size_t size)
{
	void *alloc;
	
	alloc = malloc(size);
	if ((alloc == NULL))
		return (NULL);
	return (alloc);
}
