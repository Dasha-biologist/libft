/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:10:36 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 09:15:41 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while ((a[i] != '\0' || b[i] != '\0') && n > 0)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
		n--;
	}
	return (0);
}
