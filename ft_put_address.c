/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:47:20 by jgamonal          #+#    #+#             */
/*   Updated: 2023/04/03 09:52:35 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static void	ft_str_swap(char *hexa, int i)
{
	int		j;
	char	temp;

	j = 0;
	while (i > j)
	{
		temp = hexa[j];
		hexa[j] = hexa[i - 1];
		hexa[i - 1] = temp;
		i--;
		j++;
	}
	i = 0;
	while (hexa[i] != '\0')
	{
		ft_putchar(hexa[i]);
		i++;
	}
}

int	ft_put_address(unsigned long int address)
{
	int		i;
	int		remainder;
	char	hexa[50];

	hexa[0] = '\0';
	i = 1;
	if (address == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (address != 0)
	{
		remainder = address % 16;
		if (remainder < 10)
			remainder = remainder + 48;
		else
			remainder = remainder + 87;
		hexa[i++] = remainder;
		address = address / 16;
	}
	hexa[i++] = 'x';
	hexa[i++] = '0';
	ft_str_swap(hexa, i);
	return (i - 1);
}
