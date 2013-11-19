/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:38:35 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/19 18:25:09 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n);
void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n);
void	*ft_memmove(void *s1,const void *s2,size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
#endif
