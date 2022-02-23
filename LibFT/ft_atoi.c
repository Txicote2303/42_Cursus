/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 01:19:50 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:47:00 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	confirmer(const	char	*str, int finalnr, int isneg, int i)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		finalnr *= 10;
		finalnr += str[i] - '0';
		i++;
	}
	if (isneg == 1)
		return (finalnr * -1);
	return (finalnr);
}

int	ft_atoi(const	char	*str)
{
	int	i;
	int	sign_countr;
	int	finalnr;
	int	isneg;

	i = 0;
	finalnr = 0;
	sign_countr = 0;
	isneg = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = 1;
		sign_countr ++;
		i++;
	}
	if (sign_countr > 1)
		return (0);
	return (confirmer(str, finalnr, isneg, i));
}
