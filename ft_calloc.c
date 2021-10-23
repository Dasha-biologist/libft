/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:47:36 by mmirta            #+#    #+#             */
/*   Updated: 2021/10/15 07:55:42 by mmirta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*memory;

	memory = malloc(number * size);
	if (memory == NULL)
		return (0);
	ft_bzero(memory, size * number);
	return (memory);
}
