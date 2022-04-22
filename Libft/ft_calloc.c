/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:13:51 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 01:30:03 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
	unsigned char *contiguous;
	size_t i;
	
	contiguous = malloc(count * size);
	if (!contiguous)
		return (0);
	i = 0;
	while (i < count * size)
	{
		contiguous[i] = '\0';
		i++;
	}
	return ((void*)contiguous);
}