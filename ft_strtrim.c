/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:12:27 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:13:16 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;

	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len1 = ft_strlen(s1);
	while (len1 && ft_strchr(set, s1[len1]) != 0)
		len1--;
	return (ft_substr(s1, 0, len1 + 1));
}
