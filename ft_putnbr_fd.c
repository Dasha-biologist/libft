/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:59:33 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 20:01:31 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

void	ft_putnbr_fd(int n, int fd)
{
	int		k;
	char	c;

	if (n > -1 && n < 1)
	{
		write(fd, "0", 1);
		return ;
	}
	k = countn(n);
	if (k == 0)
		return ;
	if (n < 0)
		write (fd, "-", 1);
	while (k > 0)
	{
		k--;
		c = symbol(n, k);
		write(fd, &c, 1);
	}
}
