/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:10:39 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 21:18:30 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while ((size != 0) && src[i] && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[size] = '\0';
	return (ft_strlen(src));
}
