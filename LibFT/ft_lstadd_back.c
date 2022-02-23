/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval < frcarval@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:14:58 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:47:49 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*noice;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	noice = ft_lstlast(*lst);
	noice -> next = new;
}
