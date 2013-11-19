/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:17:33 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 15:58:53 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../lib/libft.h"

int main(void)
{
	char str1[50] = "Je suis le roi des bambous";
	char str2[50] = "BAMBOO POWER !!!";
//TESTS MEMSET
	printf("%s\n", memset(str1, 'x', 3));
	printf("%s\n", ft_memset (str1, 'z', 3));
//TESTS BZERO
	ft_bzero (str1+8, 3);
	printf("%s\n", str1); 
	bzero(str1+2,3);
	printf("%s\n", str1); 
//TESTS MEMCPY
	printf("%s\n", memcpy(str1, str2, 7));
	printf("%s\n", ft_memcpy(str1, str2, 7));
//TESTS MEMCCPY
	printf("%s\n", ft_memccpy(str1, str2, 79, 7));
	printf("%s\n", memccpy(str1, str2, 79, 7));
	return (0);
}
