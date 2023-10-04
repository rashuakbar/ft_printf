/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsgint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:17:11 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/04 12:23:20 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_du(long int n)
{
	int	dgt;

	dgt = 0;
	while (n > 9)
	{
		dgt++;
		n = n / 10;
	}
	dgt = dgt + 1;
	return (dgt);
}

char	*ft_unitoa(unsigned int nbr)
{
	char	*str;
	int		i;
	int		index;

	if (nbr == 0)
		return (ft_strdup("0"));
	i = count_du(nbr);
	index = 1;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	while (nbr && index <= i)
	{
		str[i - index] = nbr % 10 + '0';
		nbr = nbr / 10;
		index++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_printf_unsgint(unsigned int num)
{
	char	*str;
	int		len;

	str = ft_unitoa(num);
	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
/*int main ()
{
	int c, d, a = -456;
	
	//unsigned int b = -2;
	
	d = ft_printf_unsgint(a);
	c = printf("\n%u", a);
	printf("\n %d, -%d-", d, (c-1));
	return(0);
}*/
