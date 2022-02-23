/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:04:08 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:50:25 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = (long int) n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i *= -1;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((i % 10) + '0', fd);
}
