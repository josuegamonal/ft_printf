/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:11:21 by josue             #+#    #+#             */
/*   Updated: 2023/04/03 10:38:36 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_switch(va_list args, char const *format)
{
	int	counter;

	counter = 0;
	if (*format == 'c')
		counter += ft_putchar_printf(va_arg(args, int));
	else if (*format == 's')
		counter += ft_putstr_printf(va_arg(args, char *));
	else if (*format == 'p')
		counter += ft_put_address(va_arg(args, unsigned long int));
	else if (*format == 'd' || *format == 'i')
		counter += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		counter += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x')
		counter += ft_nbr_to_hexadecimal(va_arg(args, unsigned int));
	else if (*format == 'X')
		counter += ft_nbr_to_hexadecimal_uppercase(va_arg(args, unsigned int));
	else if (*format == '%')
		counter += ft_putpercent_printf('%');
	return (counter);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			counter += ft_switch(args, &format[i + 1]);
			i++;
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
