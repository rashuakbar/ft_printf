/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:14:02 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/04 12:13:01 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_op(char *string, int op, va_list args)
{
	if (string[op] == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (string[op] == 's')
		return (ft_printf_string(va_arg(args, char *)));
	else if (string[op] == 'p')
		return (ft_printf_pnt(va_arg(args, void *)));
	else if (string[op] == 'd' || string[op] == 'i')
		return (ft_printf_int(va_arg(args, int)));
	else if (string[op] == 'x')
		return (ft_printf_hxbase(va_arg(args, int), "0123456789abcdef"));
	else if (string[op] == 'X')
		return (ft_printf_hxbase(va_arg(args, int), "0123456789ABCDEF"));
	else if (string[op] == 'u')
		return (ft_printf_unsgint(va_arg(args, int)));
	else if (string[op] == '%')
		return (ft_printf_char('%'));
	else
		return (0);
}

int	ft_printf(const char *input, ...)
{
	int			cont;
	int			i;
	char		*stg;
	va_list		args;

	stg = (char *)input;
	cont = 0;
	i = 0;
	va_start(args, input);
	while (stg[i])
	{
		if (stg[i] == '%')
		{
				cont += check_op(stg, (i + 1), args);
				i++;
		}
		else
		{
			ft_putchar_fd(stg[i], 1);
			cont++;
		}
		i++;
	}
	va_end(args);
	return (cont);
}
/*int main(int argv, char **argc)
{
	int p, q, t, w, y, z, f;
	int i = -987, j = -1, l = 0, k = 299;
	unsigned int g = -2;
	char a = 'o', b = 'l', c = 'a', d = '!';
	int *m = &i, *n = &j, *r = &l, *s = &k;
	char 	*nome;

	if (argv < 2)
	{	
		write (1,"sem argumentos\n",15);
		return (0);
	}
	
	nome = ft_strdup(argc[1]);
	p = ft_printf("numeros: %d, %i, %i, %d.", i, j, l, k);
	q =ft_printf("\n letra: %c %c %c %c.", a, b, c, d);
	t = ft_printf("\n numeros unsigned: %u, %u, %u, %u, %u.", i, j, l, k, g);
	w = ft_printf("\n numeros hxdecimal: %x, %X, %x, %X", i, j, l, k);
	y = ft_printf("\nnome: %s", nome);
	z = ft_printf("\n endereçoes(pointers): %p, %p, %p, %p, %p", m, n, r, s, nome);
	f = ft_printf("\n escrevendo (percentagem) %% .\n");
	
	printf("\n\n %d, %d, %d , %d, %d, %d, %d\n\n", p,q, t, w, y, z, f);
	
	p = printf("numeros: %d, %i, %d, %i.", i, j, l, k);
	q = printf("\n letra: %c %c %c %c.", a, b, c, d);
	t = printf("\n numeros unsigned: %u, %u, %u, %u, %u.", i, j, l, k, g);
	w = printf("\n numeros hxdecimal: %x, %X, %x, %X", i, j, l, k);
	y = printf("\nnome: %s", nome);
	z = printf("\n endereçoes(pointers): %p, %p, %p, %p, %p", m, n, r, s, nome);
	f = printf("\n escrevendo (percentagem) %% .\n");
	
	printf("\n\n %d, %d, %d , %d, %d, %d, %d \n", p, q, t, w, y, z, f);

	free(nome);
	return(0);
}*/
