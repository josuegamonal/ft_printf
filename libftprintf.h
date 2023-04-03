/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:14:04 by josue             #+#    #+#             */
/*   Updated: 2023/04/03 10:41:17 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int	ft_putstr_printf(char *str);
int	ft_strlen(char *str);
int	ft_putchar_printf(int c);
int	ft_putnbr(int nbr);
int	ft_digit_counter(int nbr);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_unsigned_digit_counter(unsigned int nb);
int	ft_nbr_to_hexadecimal(unsigned int nbr);
int	ft_nbr_to_hexadecimal_uppercase(unsigned int nbr);
int	ft_putpercent_printf(char c);
int	ft_put_address(unsigned long address);
#endif
