/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:57:05 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 00:47:23 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	if (!needle)
		return (haystack);
	i = 0;
	while (haystack[i])
	{
		n = 0;
		while (haystack[i] == needle[i] && n <= len)
		{
			n++;
			if (n == len)
				return (&haystack[i-n]);
			i++;
		}
		i++;
	}
	return (0);
}