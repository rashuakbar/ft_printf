/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pnt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:14:26 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/03 11:18:26 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_dg(unsigned long n)
{
	int	dgt;

	dgt = 0;
	while (n > 15)
	{
		dgt++;
		n = n / 16;
	}
	dgt = dgt + 1;
	return (dgt);
}

char	*ft_hxtoa_long(unsigned long nb, char *base)
{
	char	*str;
	int		i;
	int		index;

	if (nb == 0)
		return (ft_strdup("0"));
	i = count_dg(nb);
	index = 1;
	str = malloc(sizeof(char) * i + 3);
	if (!str)
		return (NULL);
	while (nb && index <= i)
	{
		str[(i + 2) - index] = base[nb % 16];
		nb = nb / 16;
		index++;
	}
	str[1] = 'x';
	str[0] = '0';
	str[i + 3] = '\0';
	return (str);
}

int	ft_printf_pnt(void *pointer)
{
	unsigned long	pnt;
	char			*adress;
	int				len;

	pnt = (unsigned long) pointer;
	adress = ft_hxtoa_long(pnt, "0123456789abcdef");
	if (!adress)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	len = ft_strlen(adress);
	ft_putstr_fd(adress, 1);
	free (adress);
	return (len);
}
/*int main ()
{
	void *exemplo;
	int	ex1, c, d;
	char *ex2;
	
	ex1 = 1;
	ex2 = ft_strdup("oi");
	exemplo = ft_strdup("");
	
	c = ft_printf_pnt(exemplo);
	write(1,"\n",1);
	d = printf("%p",exemplo);
	printf("\n %d, -%d- \n", c, d);
	c = ft_printf_pnt(&ex1);
	write(1,"\n",1);
	d = printf("%p",&ex1);
	printf("\n %d, -%d- \n", c, d);	
	c = ft_printf_pnt(ex2);
	write(1,"\n",1);
	d = printf("%p",ex2);
	printf("\n %d, -%d- \n", c, d);	
	return (0);
}*/
