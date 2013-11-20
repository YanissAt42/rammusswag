/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:38:35 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/20 11:08:31 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n);
void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n);
void	*ft_memmove(void *s1,const void *s2,size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
#endif
