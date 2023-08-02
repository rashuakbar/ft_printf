/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:43:48 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/18 21:55:38 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nl, size_t lsize)
{
	void	*temp;

	temp = malloc(lsize * nl);
	if (!temp)
		return (NULL);
	ft_bzero(temp, (lsize * nl));
	return ((void *)temp);
}
