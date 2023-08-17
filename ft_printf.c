/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:14:02 by vimendes          #+#    #+#             */
/*   Updated: 2023/08/17 15:14:11 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_op(char *string, int op, va_list args)
{
	/*check das opções*/
	if (string[op] == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (string[op] == 's')
		return (ft_printf_string(va_arg(args, char *)));
	else if (string[op] == 'p')
		return (ft_printf_pnt(va_arg(args,void *)));
	else if (string[op] == 'd' || string[op] == 'i')
		return ft_printf_int(va_arg(args, int));
	else if (string[op] == 'u')
		return ft_printf_hxbase(va_arg(args,int), "0123456789abcdef");
	else if (string[op] == 'U')
		return (ft_printf_hxbase(va_arg(args,int), "0123456789ABCDEF"));
	else if (string[op] == '%')
		return (ft_printf_char('%'));
	else
		return (0);
}

int	ft_printf(const char *input, ...)
{
	int	cont;
	int	i;
	char *stg;
	va_list args;

	stg = (char *)input;
	cont = 0;
	i = 0;
	va_start(args,input);
	while(stg[i])
	{
		if (stg[i] == "%")
			cont += check_op(stg, (i+1), args);
		else
			{
				ft_putchar_fd(stg[i],1);
				cont++;
			}
		i++;
	}
	va_end(args);
	return (cont);
}
