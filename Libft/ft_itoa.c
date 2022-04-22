/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:25:55 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/22 12:12:12 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_nbr_to_str(int n, char *dst, int size)
{
	if (n == -2147483648)
	{
		*dest = "-2147483648";
	}
	else
	{
		if (n < 0)
		{
			dst[0]='-';
			n *= -1;
		}
		while (size > 0)
		{
			if (n >= 10)
				ft_nbr_to_str(n / 10);
			dst[size] =(n % 10) + '0';
			size--;
		}
	}
}

char *ft_itoa(int n)
{
	char *str_value;
	int i;
	int size;

	if (n == -2147483648)
	{
		str_value = (char*)malloc(11);
		if (!str_value)
			return (0);
		ft_nbr_to_str(n, str_value,11);
		return (str_value);
	}
	i = 0;
	while (n%10 != 0)
		size++;
	str_value = (char*)malloc(size);
	if (!str_value)
		return (0);
	ft_nbr_to_str(n,str_value,size);
	return (str_value);
}