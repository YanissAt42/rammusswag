/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:17:07 by ychnakib          #+#    #+#             */
/*   Updated: 2013/11/21 16:29:49 by ychnakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int result;
	int negative;

	result = 0;
	negative = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-')
	{
		str++;
		negative = 1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (negative == 1)
		result = - result;
	return (result);
}
