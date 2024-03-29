/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:07:28 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 16:20:45 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

int	ft_tolower(int c)
{
	if ( c >= 0x41 && c <= 0x5A)
		return (c + 0x20);
	return (c);
}
