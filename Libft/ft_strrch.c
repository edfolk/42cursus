/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:53:45 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 23:39:24 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *strrchr(const char *s, int c)
{
	int i;
	unsigned char unsigned_s;

	unsigned_s = s;
	i = ft_strlen(s);
	if (c == '\0' && unsigned_s[i] == '\0')
		return (&unsigned_s[i]);
	while(unsigned_s[i])
	{
		if (unsigned_s[i] == (unsigned char)c)
			return (&unsigned_s[i]);
		i--;
	}
	return (0);
}