/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:35:31 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 09:40:23 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	if (dest == NULL && src == NULL)
		return (dest);
	a = (char *)dest;
	b = (char *)src;
	while (n != 0)
	{
		n--;
		a[n] = b[n];
	}
	return (dest);
}
