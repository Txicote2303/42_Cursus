/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvanru.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:44:13 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/09 16:34:12 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvanru (va_list *args)
{
	unsigned int	u;
	
	u = va_arg(*args, unsigned int);
	return (ft_putnbr(u));
}