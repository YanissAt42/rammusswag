/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:44:14 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 15:40:40 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void *ft_memalloc(size_t size)
{
	void *alloc;
	
	if ((alloc = malloc(size)) == NULL)
		return (NULL);
	return (alloc);
}
