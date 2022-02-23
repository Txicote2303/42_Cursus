/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:12:34 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/22 21:17:13 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*le_separateur(char **holy_one)
{
	char	*garbage;
	char	*trash;
	int		i;

	if (!*holy_one || **holy_one == '\0')
		return (0);
	i = ft_strchr(*holy_one, '\n');
	if (i >= 0)
	{
		trash = ft_substr(*holy_one, 0, i + 1);
		garbage = ft_substr(*holy_one, i + 1, ft_strlen(*holy_one));
		free (*holy_one);
		*holy_one = garbage;
		if (**holy_one != '\0')
			return (trash);
	}
	else
		trash = ft_strdup(*holy_one);
	free (*holy_one);
	*holy_one = 0;
	return (trash);
}

char	*get_next_line(int fd)
{
	static char	*holy_one[4096];
	char		buffy_boy[BUFFER_SIZE + 1];
	char		*garbage;
	int			counter;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 4096)
		return (NULL);
	counter = read(fd, buffy_boy, BUFFER_SIZE);
	while (counter > 0)
	{
		if (!holy_one[fd])
			holy_one[fd] = ft_strdup("");
		buffy_boy[counter] = '\0';
		garbage = ft_strjoin(holy_one[fd], buffy_boy);
		free(holy_one[fd]);
		holy_one[fd] = garbage;
		if (ft_strchr(holy_one[fd], '\n') != -1)
			break ;
		counter = read(fd, buffy_boy, BUFFER_SIZE);
	}
	return (le_separateur(&holy_one[fd]));
}
