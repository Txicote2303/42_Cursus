/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 04:30:49 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/25 21:00:54 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	string = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (s[i])
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
