/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:49:07 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/26 01:42:39 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subed_one;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
	{
		subed_one = malloc(sizeof(char));
		if (!subed_one)
			return (0);
		*subed_one = '\0';
		return (subed_one);
	}
	if (ft_strlen(s) < len)
		return (ft_strdup((char *)s + start));
	subed_one = (char *)malloc(len + 1 * sizeof(char));
	if (!subed_one)
		return (0);
	while (start < ft_strlen(s) && i < len)
		subed_one[i++] = s[start++];
	subed_one[i] = '\0';
	return (subed_one);
}
