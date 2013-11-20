/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:17:33 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 12:38:03 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/libft.h"

int main(void)
{
	char str1[50] = "Je suis le roi des bambous";
	char str2[50] = "El BAMBOu POWER !!!";
	char str3[50] = "Je suis le roi des bambous";

//TESTS STRCPY
//	printf("%s\n", strcpy(str1, str2));
//	printf("%s\n", ft_strcpy(str3, str2));
//TESTS STRNCPY
//	printf("%s\n", strncpy(str1, str2, 3));
//	printf("%s\n", ft_strncpy(str3, str2, 3));
//TESTS STRCAT
	printf("%s\n", ft_strcat(str3, str2));
	printf("%s\n", strcat(str1, str2));
//TESTS STRDUP
	printf("%s\n", strdup(str1));
	printf("%s\n", ft_strdup(str3));
//TESTS STRLEN
	printf("%zd \n", strlen(str2));
	printf("%zd \n", ft_strlen(str2));
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
