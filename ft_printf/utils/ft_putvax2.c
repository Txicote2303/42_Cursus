/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvax2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:48:22 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 17:53:01 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvax2(va_list *args)
{
	unsigned int X;
    
    X = va_arg(*args, int);
    ft_baser(X, "0123456789ABCDEF");
    return(ft_nbrlen(X, 16));
}