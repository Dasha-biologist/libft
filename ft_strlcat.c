/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:43:08 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 10:11:03 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dstlen;
	size_t			srclen;
	unsigned int	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (*src && ((dstlen + i) < (dstsize - 1)))
	{
		dst[dstlen + i] = *src;
		src++;
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
