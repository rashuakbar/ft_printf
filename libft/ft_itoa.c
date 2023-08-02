/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:31:59 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/21 13:08:32 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ndigit(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i = i + 2;
	return (i);
}

static void	*convert(long n, char *ptr, int dig)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	ptr[dig--] = '\0';
	while (n > 9)
	{
		ptr[dig--] = '0' + (n % 10);
		n = n / 10;
	}
	ptr[dig] = '0' + n;
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		dig;

	dig = ndigit(n);
	ptr = malloc (dig * sizeof(char));
	if (!ptr)
		return (NULL);
	convert(n, ptr, (dig - 1));
	return (ptr);
}
/*int main()
{
	int a = -5859;
	printf("%i || %s || %i", a, ft_itoa(a),(int)ft_strlen(ft_itoa(a)));
	return (0);
}*/
