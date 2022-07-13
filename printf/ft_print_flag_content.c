/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flag_content.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:18:20 by ljustici          #+#    #+#             */
/*   Updated: 2022/07/13 18:00:09 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	n;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	n = 0;
	while (str[n] != '\0')
		n++;
	write(1, str, n);
	return (n);
}

int	ft_putnbr(int n)
{
	int	length;

	length = 0;
	if (n == -2147483648)
		length = ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			length += ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			length += ft_putnbr(n / 10);
		length += ft_putchar((n % 10) + '0');
	}
	return (length);
}

int	ft_puthex(unsigned long long nbr, char *base)
{
	int	length;

	length = 0;
	if (nbr < 0)
		nbr = (unsigned int)nbr;
	if (nbr >= 16)
		length += ft_puthex(nbr / 16, base);
	length += ft_putchar(base[nbr % 16]);
	return (length);
}

int	ft_putpt(void *pt)
{
	int	length;

	length = 0;
	length += ft_putstr("0x");
	length += ft_puthex((unsigned long long)pt, "0123456789abcdef");
	return (length);
}

int	ft_putunbr(unsigned int n)
{
	int	length;

	length = 0;
	if (n < 0)
		n = (unsigned int)n;
	if (n >= 10)
		length += ft_putunbr(n / 10);
	length += ft_putchar((n % 10) + '0');
	return (length);
}
