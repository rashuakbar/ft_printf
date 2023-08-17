/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:16:48 by vimendes          #+#    #+#             */
/*   Updated: 2023/08/17 15:16:50 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int num)
{
/* fazer conversao de inteiro para str com ft_itoa*/
	char	*str;
	int	len;

	str = ft_itoa(num);
	if (!str)
		return (0);
	ft_putstr_fd(str,1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
