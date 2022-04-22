/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:34:25 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 23:55:12 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char a;
	unsigned char b;
	
	a = (unsigned char)s1;
	b = (unsigned char)s2;
	i = 0;
	while (i < n)
	{
		if (a != b)
			return (a-b);	
		i++;
	}
	return (0);
}