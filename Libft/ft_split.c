/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:42:18 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 10:23:26 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char const *s, char c)
{
	char **result;
	size_t j;
	size_t i;
	size_t n;
	
	j = 0;
	n = 0;
	while (s[j])
	{
		i = 0;
		while(s[i] != c)
			i++;
		if (i > 0)
		{
			result[n] = ft_substr(s, j, i);
			n++;
			j += i;
		}
		j++;
	}
	return (result;)
}