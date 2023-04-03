/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:00:45 by jgamonal          #+#    #+#             */
/*   Updated: 2023/04/01 11:20:55 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	counter;

	counter = ft_unsigned_digit_counter(nb);
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return (counter);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (counter);
}
