/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:26 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 23:32:19 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
	int i;
	unsigned char unsigned_s;

	unsigned_s = s;
	i = 0;
	while(unsigned_s[i])
	{
		if (unsigned_s[i] == (unsigned char)c)
			return (&unsigned_s[i]);
		i++;
	}
	if (unsigned_s[i] == c)
		return (&unsigned_s[i]);
	return (0);
}