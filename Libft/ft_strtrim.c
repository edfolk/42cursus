/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 06:46:52 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 08:41:19 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	size_t size;
	char *result;

	size = ft_strlen(s1);
	start = 0;
	end = 0;
	i = 0;
	while (set[i])
	{
		if (ft_strchr(s1,set[i]) == 0)
			start++;
		if (ft_strrch(s1,set[i]) == 0)
			end++;
	}
	result = (char*)malloc(size - (start + end));
	if (!result)
		return (0);
	i = 0;
	while (i < size - (start + end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	return (result);
}
