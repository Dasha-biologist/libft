/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:55:47 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:57:09 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	if (s == NULL)
	{
		return ;
	}
	len = ft_strlen(s);
	i = 0;
	while (len > 0)
	{
		ft_putchar_fd(s[i], fd);
		len--;
		i++;
	}
}
