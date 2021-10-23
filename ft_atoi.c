/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:17:28 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:05:09 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		k;
	long	number;

	k = 1;
	number = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r' || *str == '\r')
		str++;
	if (*str == '-')
	{
		k = k * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (number >= (long)2147483648 && k == -1)
			return (0);
		if (number >= (long)2147483647 && k == 1)
			return (-1);
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number * k);
}
