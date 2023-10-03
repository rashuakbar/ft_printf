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
	char	*str;
	int		len;

	str = ft_itoa(num);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
/*int main()
{
	int a = 0;
	int b = -2147483648;
	int c = 2147483647;
	int d = 123465;

	printf("\n <%d> ",ft_printf_int(a));
	printf("\n <%d> ", ft_printf_int(b));
	printf("\n <%d> ",ft_printf_int(c));
	printf("\n <%d> ", ft_printf_int(d));
	printf("\n");
	return (0);
}*/
