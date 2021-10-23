/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:14:46 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/21 19:19:01 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strccount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**clean(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	s = NULL;
	return (0);
}

static size_t	strclen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static size_t	findstart(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	start;

	i = 0;
	if (s == NULL)
		return (0);
	strings = ft_calloc(sizeof(char *), strccount(s, c) + 1);
	if (strings == NULL)
		return (0);
	start = findstart(s, c);
	while (i < strccount(s, c))
	{
		strings[i] = ft_substr(s, start, strclen((char *)s + start, c));
		if (strings[i] == NULL)
			return (clean(strings));
		start += strclen((char *)s + start, c);
		while (s[start] == c)
			start++;
		i++;
	}
	return (strings);
}
