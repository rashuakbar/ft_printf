/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 05:08:54 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/17 05:10:55 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (sub[i] == '\0')
		return ((char *)str);
	if (n > ft_strlen(str))
		n = ft_strlen(str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == sub[j]) && ((i + j) < n))
		{
			j++;
			if (sub[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*int main()
{

    char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t  max = ft_strlen(s2);

   //char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i2,i2);
    return 0;
}*/
