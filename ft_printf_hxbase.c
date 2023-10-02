/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hxbase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:16:37 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/02 11:45:59 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	count_d(unsigned int n)
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
char	*ft_itoa_hx(unsigned int nb, char *base)
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

int	ft_printf_hxbase(unsigned int num, char *base)
{
	char	*str;
	int	len;
	str = ft_itoa_hx(num, base);
	len = ft_strlen(str);
	ft_putstr_fd(str,1);
	free(str);
	return (len);	
}

int main(void)
{
	int i = -999;
	int c, d;

	c = ft_printf_hxbase((unsigned int)i,"0123456789ABCDEF");
	d = printf("\n%X",i);
	printf("\n %d -%d-\n", c, d);
	return (0);
}
