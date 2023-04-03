/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_hexadecimal_uppercase.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:34:17 by jgamonal          #+#    #+#             */
/*   Updated: 2023/04/01 12:44:04 by jgamonal         ###   ########.fr       */
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

int	ft_nbr_to_hexadecimal_uppercase(unsigned int nbr)
{
	int		i;
	int		remainder;
	char	hexa[50];

	hexa[0] = '\0';
	i = 1;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (i);
	}
	while (nbr != 0)
	{
		remainder = nbr % 16;
		if (remainder < 10)
			remainder = remainder + 48;
		else
			remainder = remainder + 55;
		hexa[i++] = remainder;
		nbr = nbr / 16;
	}
	ft_str_swap(hexa, i);
	return (i - 1);
}
