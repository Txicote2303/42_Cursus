/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvax1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:17:04 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 17:51:53 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putvax1(va_list *args)
{
    unsigned int    x;
    
    x = va_arg(*args, int);
    ft_baser(x, "0123456789abcdef");
    return(ft_nbrlen(x, 16));
}

/*
int	ft_putvax1(va_list *args)
{
	int     x;
    int     counter;
	char	*final;
	int		test;
    char    *hexa;
    
    x = va_arg(*args, int);
    hexa = ft_strdup("0123456789abcdef");
    counter = 0;
    if (x < 0)
    {
        write(1, "-", 1);
        x *= -1;
        counter++;
    }
    test = x;
    while(test/16 > 0)
        counter++;
	final = malloc(sizeof(char) * (counter + 1));
    final[counter] = '\0';
    counter --;
    return (ft_hexaprinter(hexa, final, counter, x));
}*/
/*
int	ft_putvax1(va_list *args)
{
	int x = va_arg(*args, int);
    char    *hexa;
	char	*final;
	int		test;
	int		counter;
	
    counter = 0;
	hexa = ft_strdup("0123456789abcdef");
    if (x < 0)
    {
        write(1, "-", 1);
        x *= -1;
    }
    test = x;
    while(test/16 > 0)
        counter++;
	final = malloc(sizeof(char) * (counter + 1));
    final[counter] = '\0';
    counter --;
    return (ft_hexaprinter(hexa, final, counter, x));
}
*/