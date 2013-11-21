/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:38:35 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 17:10:30 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *__restrict__ s1, const void *__restrict__ s2, size_t n);
void	*ft_memccpy(void *__restrict__ s1, const void *__restrict__ s2, int c, size_t n);
void	*ft_memmove(void *s1,const void *s2,size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *__restrict__ s1, const char *__restrict__ s2, size_t n);
char	*ft_strcat(char *__restrict__ s1, const char *__restrict__s2);
char	*ft_strncat(char *__restrict__ s1, const char *__restrict__ s2, size_t n);
size_t	ft_strlcat(char *__restrict__ dst, const char *__restrict__ src, size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
#endif
