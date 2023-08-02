/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:03:47 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/18 20:13:22 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned const char	*s1;	
	unsigned const char	*s2;
	size_t				i;

	s1 = (unsigned const char *)str1;
	s2 = (unsigned const char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char	s[] = "olalllll";
	char	d[] = "olalllllo";
	int	c = ft_memcmp(s,d,8);
	int	e = memcmp(s,d,5);
	printf("%i || %i",c,e);
	return (0);
}*/
