/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pnt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:14:26 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/02 12:50:16 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_d(unsigned long n)
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
	i = count_d(nb);
	index = 1;
	str = malloc(sizeof(char) * i + 1);
	if(!str)
		return (NULL);
	while (nb && index <= i)
	{
		str[i-index] = base[nb % 16];
		nb = nb / 16;
		index++;
	}
	str[i] = '\0';
	return (str);
}
int ft_printf_pnt(void *pointer)
{
	/*imprimir o endereçao em hexadecimal*/
	char *adress;
	unsigned long  pnt; 
	int	len;

	pnt = (unsigned long) pointer;
	adress = ft_hxtoa_long(pnt,"0123456789abcdef");
	if (!adress)
	{
		ft_putstr_fd("(nil)",1);
		return(5);
	}
	len = ft_strlen(adress);	
	ft_putstr_fd(adress,1);
	free (adress);
	return (len);
}
int main ()
{
	char *exemplo;
	
	exemplo = ft_strdup("ola mundo");
	
	ft_printf_pnt(exemplo);
	printf("\n%p",exemplo);
	return (0);
}
