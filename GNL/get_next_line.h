/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:19:58 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/22 21:22:06 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strdup(char *wanna_be_copied);
char	*ft_strjoin(char *goku, char *vegeta);
char	*ft_substr(char *s, int start, int len);
char	*le_separateur(char **holy_one);
char	*get_next_line(int fd);
int		ft_strlen(char *wanna_be_counted);
int		ft_strchr(char *wanna_be_analyzed, char treasure);

#endif