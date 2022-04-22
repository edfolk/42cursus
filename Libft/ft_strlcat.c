/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:19:00 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 21:26:07 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;
	size_t	j;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	j = size_dest;
	i = 0;
	if (size == 0 || size <= size_dest)
		return (size_src + size);
	while (src[i] != '\0' && i < size - size_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size_dest + size_src);
}
