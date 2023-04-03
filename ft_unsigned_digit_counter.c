/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_digit_counter.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:09:10 by jgamonal          #+#    #+#             */
/*   Updated: 2023/04/01 11:10:57 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsigned_digit_counter(unsigned int nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		counter++;
	if (nb < 0)
		counter++;
	while (nb != 0)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}
