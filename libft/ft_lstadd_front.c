/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:36:12 by vimendes          #+#    #+#             */
/*   Updated: 2023/05/09 15:24:11 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new))
		return ;
	if (!(lst))
	{
		(*lst)->content = new->content;
		(*lst)->next = NULL;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
