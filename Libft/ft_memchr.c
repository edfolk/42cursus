/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:22:27 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 23:40:47 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char char_c;

	char_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (c == s[i])
			return ((void*)s[i]);
		i++;
	}
	return (0);
}