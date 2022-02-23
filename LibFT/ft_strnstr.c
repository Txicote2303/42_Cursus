/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:45:19 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/26 03:29:47 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compar(const char *haystack, const char *needle,
			size_t len, size_t i)
{
	size_t	u;

	u = 0;
	while (i <= len)
	{
		if (needle[u] == '\0')
			return (1);
		if (haystack[i] != needle[u])
			return (0);
		u++;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (compar(haystack, needle, len, i) == 1)
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
