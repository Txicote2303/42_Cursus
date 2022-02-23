/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvachr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:02:40 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/08 20:54:31 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvachr(va_list *args)
{
	char	c;
	
	c = va_arg(*args, int);
	write(1, &c, 1);
	return 1;
}