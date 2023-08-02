/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:20:47 by vimendes          #+#    #+#             */
/*   Updated: 2023/05/09 18:22:35 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = lst;
	head = ft_lstnew(f(temp->content));
	if (!(head))
		return (NULL);
	temp = temp->next;
	while (temp != NULL)
	{
		new = ft_lstnew(f(temp->content));
		if (!(new))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		temp = temp->next;
	}
	return (head);
}
