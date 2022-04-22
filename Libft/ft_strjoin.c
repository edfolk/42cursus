/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:49:30 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 07:36:56 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t size;
	char *result;
	
	size = ft_strlen(s1) + ft_strlen(s2);
	result = (char*)malloc(size);
	if (!result)
		return (0);
	i = 0;
	result[size] = '\0';
	while (i < size/2)
	{
		result[i] = s1[i];
		result[size - i - 1] = s2[size - i - 1];
		i++;
	}
	return (result);
}
