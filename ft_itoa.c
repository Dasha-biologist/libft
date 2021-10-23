/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:20:56 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:21:50 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countn(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			n = n + 2;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	symbol(int n, int k)
{
	if (n < 0)
	{
		if (n == -2147483648 && k == 0)
			return (8 + '0');
		else if (n == -2147483648)
			n = n + 1;
		n = n * -1;
	}
	while (k > 0)
	{
		n = n / 10;
		k--;
	}
	n = n % 10;
	return (n + '0');
}

char	*ft_itoa(int n)
{
	char	*number;
	int		i;
	int		k;

	i = 0;
	if (n > -1 && n < 1)
	{
		number = ft_calloc(sizeof(char), 2);
		number[0] = '0';
		return (number);
	}
	k = countn(n);
	if (k == 0)
		return (0);
	if (n < 0)
		number = ft_calloc(sizeof(char), k + 2);
	if (n > 0)
		number = ft_calloc(sizeof(char), k + 1);
	if (number == NULL)
		return (0);
	if (n < 0)
		number[i++] = '-';
	while (k-- > 0 && n != 0)
		number[i++] = symbol(n, k);
	return (number);
}
