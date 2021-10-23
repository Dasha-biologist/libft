/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:08:39 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:09:54 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (0);
	string = ft_strdup(s);
	if (string == NULL || f == NULL)
		return (0);
	while (string[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	return (string);
}
