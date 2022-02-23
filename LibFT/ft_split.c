/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 05:13:51 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/26 02:54:27 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	runner(char const *s, char c)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (i == 0)
			while (s[i] == c)
				i++;
		if (s[i] == c)
			if (i > 0 && s[i - 1] != s[i] && s[i + 1] != '\0')
				u++;
		if (s[i] != c && s[i + 1] == '\0')
				u++;
		i++;
	}
	return (u);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		v;
	int		i;
	char	**div;

	div = malloc(sizeof(char *) * (runner(s, c) + 1));
	if (!div || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		v = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		div[j] = ft_substr(s, v, i - v);
		j++;
	}
	div[j] = NULL;
	return (div);
}
