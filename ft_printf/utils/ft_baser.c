/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baser.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:47:23 by frcarval          #+#    #+#             */
/*   Updated: 2021/12/10 17:50:06 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void ft_baser (unsigned long long int nbr, char *base)
{
    unsigned int  base_detector;

    base_detector = ft_strlen(base);
    if (nbr >= base_detector)
        ft_baser (nbr / base_detector, base);
    write (1, &base[nbr % base_detector], 1);
}

/*
int	ft_baser(char *hexa, char * final, int counter, int x)
{
	int	counter2;

	counter2 = 0;
	while(counter >= 0)
    {
        final[counter] = hexa[(x % 16)];
        x /= 16;
        counter--;
    }
    while(final[counter2] != '\0')
    {
        write(1, &final[counter2], 1);
        counter++;
    }
	return (ft_strlen(final));
}*/