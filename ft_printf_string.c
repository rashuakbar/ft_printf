/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:16:16 by vimendes          #+#    #+#             */
/*   Updated: 2023/08/17 15:16:25 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(char * src)
{
	int	len;

	if (!src)
	{
		write(1,"(null)",6);
		return (6);
	}
	len = ft_strlen(src);
	ft_putstr_fd(src,1);
	return (len);	
}
