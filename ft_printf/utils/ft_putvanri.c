/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvanri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:42:24 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/09 18:55:59 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvanri(va_list *args)
{
	int	i;
	
	i = va_arg(*args, int);
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
		return (ft_putnbr(i) + 1);
	}	
	return (ft_putnbr(i));
}
