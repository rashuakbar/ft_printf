/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:12:45 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/18 18:13:04 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*s;
	unsigned char		ch;
	size_t				i;

	s = (unsigned const char *) str;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s[i] == ch)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*int main ()
{
	int s[4] = {1,2,3,4};
	int c = 3;
	int	*res;
	int i;
	res = ft_memchr(s,c,16);
	for(i = 0 ; i < 2 ; i++)
		printf(" %i ", res[i]);
	return (0);
}*/
