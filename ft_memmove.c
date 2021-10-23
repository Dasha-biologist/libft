/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 08:23:07 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 08:41:57 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	if (src < dest)
	{
		while (n != 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
	{
		while (n != i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
