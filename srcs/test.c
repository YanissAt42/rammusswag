/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:17:33 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 19:22:07 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../lib/libft.h"

int main(void)
{
	char str1[50] = "Je suis le roi des bambous";
	char str2[50] = "Je BAMBOu POWER !!!";
	char str3[42] = "Je suis le roi des bambous";

//TESTS MEMCMP
	printf("%d\n", ft_memcmp(str1, str2, 8));
	printf("%d\n", memcmp(str1, str2, 8));
//TESTS MEMCHR
	printf("%s\n", ft_memchr(str1, 'u', 19));
	printf("%s\n", memchr(str1, 'u', 19));
//TESTS MEEMOVE
	printf("%s\n", memmove(str2, str1, 17));
	printf("%s\n", ft_memmove(str2, str1, 17));
//TESTS MEMSET
/*	printf("%s\n", memset(str1, 'x', 3));
	printf("%s\n", ft_memset (str3, 'z', 3));
//TESTS BZERO*/
	ft_bzero (str1+8, 3);
	printf("%s\n", str1); 
	bzero(str3+8, 3);
	printf("%s\n", str3); 
//TESTS MEMCPY
	printf("%s\n", memcpy(str1, str2, 7));
	printf("%s\n", ft_memcpy(str3, str2, 7));
//TESTS MEMCCPY
	printf("%s\n", ft_memccpy(str3, str2, 'B', 7));
	printf("%s\n", memccpy(str1, str2, 'B', 7));
	return (0);
}
