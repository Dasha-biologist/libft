/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:10:30 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:11:03 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*memory;

	if (s == NULL)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	memory = (char *)malloc(len + 1);
	if (memory == NULL)
		return (0);
	ft_bzero(memory, len + 1);
	while (len != 0)
	{
		len--;
		memory[len] = s[start + len];
	}
	return (memory);
}
