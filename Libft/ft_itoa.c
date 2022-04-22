/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:25:55 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 10:45:37 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
{
	char *str_value;
	int i;
	int size;

	i = 0;
	while (n%10 != 0)
		size++;
	str_value = (char*)malloc(size);
	if (!str_value)
		return (0);
	i = 0;
	while (i < size/2)
	{
		
		i++;
	}
}