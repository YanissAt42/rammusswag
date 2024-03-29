/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:21:42 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 14:28:16 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i++] != '\0')
		ft_putchar(s[i - 1]);
}
