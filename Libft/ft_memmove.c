/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:33:38 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 21:51:51 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char dst_char;
	const unsigned char src_char;

	if (!dst && !src)
		return (0);
	dst_char = (unsigned char*)dst;
	src_char = (const unsigned char*)src;
	if (dst_char > src_char)
	{
		while (len > 0)
		{
			dst_char[len] = src_char[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			dst_char[i] = src_char[i];
			i++;
		}
	}
	return ((void*)dst_char);
}