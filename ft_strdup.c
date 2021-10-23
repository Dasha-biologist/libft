/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:01:23 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 09:09:43 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (copy == NULL)
		return (0);
	n = 0;
	while (s[n] != '\0')
	{
		copy[n] = s[n];
		n++;
	}
	copy[n] = '\0';
	return (copy);
}
