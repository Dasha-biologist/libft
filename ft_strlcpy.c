/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:42:08 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 09:59:10 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (dstsize == 0)
		return (i);
	n = 0;
	while (src[n] && n < dstsize - 1)
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (i);
}
