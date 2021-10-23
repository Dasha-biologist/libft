/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:11:22 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:12:00 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s12;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s1 == NULL)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s12 = (char *)malloc(len1 + len2 + 1);
	if (s12 == NULL)
		return (0);
	ft_bzero(s12, len1 + len2 + 1);
	while (len2 != 0)
	{
		len2--;
		s12[len1 + len2] = s2[len2];
	}
	while (len1 != 0)
	{
		len1--;
		s12[len1] = s1[len1];
	}
	return (s12);
}
