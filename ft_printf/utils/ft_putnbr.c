/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:19:48 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 17:54:43 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

long int	ft_putnbr(long int n)
{
    int 	counter;
	char	printer;

    counter = 0;
	if (n >= 10)
	{
		counter += ft_putnbr(n / 10);
		counter += ft_putnbr(n % 10);
	}
	else
    {
		printer = '0' + n;
		write(1, &printer, 1);
        counter++;
    }
     return counter;   
}