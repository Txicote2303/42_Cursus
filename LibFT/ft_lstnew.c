/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:32:21 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:48:40 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mylist;

	mylist = malloc(sizeof(t_list));
	if (!mylist)
		return (NULL);
	mylist -> content = content;
	mylist -> next = NULL;
	return (mylist);
}
