/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:16:30 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 09:21:40 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	while ((big[i] != '\0') && len >= l_len)
	{
		len--;
		if (ft_strncmp(&big[i], little, l_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
