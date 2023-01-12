/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:55:06 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/12 18:49:34 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	rslt;
	int				sign;

	rslt = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		rslt = rslt * 10 + str[i++] - 48;
	if (sign == -1 && rslt > 9223372036854775807)
		return (0);
	if (sign == 1 && rslt > 9223372036854775807)
		return (-1);
	return (rslt *= sign);
}
