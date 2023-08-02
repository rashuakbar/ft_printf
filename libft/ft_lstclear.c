/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:06:13 by vimendes          #+#    #+#             */
/*   Updated: 2023/05/09 18:10:54 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del || !(*lst))
		return ;
	if ((*lst)->next == NULL)
	{
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
		return ;
	}
	while ((*lst) != NULL)
	{
		temp = (*lst)-> next;
		del ((*lst)->content);
		free(*lst);
		(*lst) = temp;
	}
	*lst = NULL;
}
