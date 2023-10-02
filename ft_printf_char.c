/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:16:59 by vimendes          #+#    #+#             */
/*   Updated: 2023/08/17 15:17:01 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(int c)
{
	ft_putchar_fd(c,1);
	return(1);
}
/*int main ()
{
	char a = 'b';
	char b = '~';

	int	d, c = 0;


	printf("<%c  - %c>\n", a, b);
	c = ft_printf_char(a);
	printf("\n");
	d = ft_printf_char(b);
	printf("\n %d - %d ", c, d);
	return(0);
}*/