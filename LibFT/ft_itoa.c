/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:09:48 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:47:43 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	sizer(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		i;

	i = sizer(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	string = malloc((i + 1) * sizeof(char));
	if (!string)
		return (0);
	string[i] = '\0';
	i--;
	if (n == 0)
		string[0] = '0';
	else if (n < 0)
	{
		string[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		string[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (string);
}
