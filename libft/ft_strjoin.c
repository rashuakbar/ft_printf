/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:43:09 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/20 17:55:11 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	size_t	i;
	char	*str;

	i = 0;
	totallen = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(totallen * sizeof(char));
	if (!str)
		return (NULL);
	while (i < (totallen - 1))
	{
		while (*s1)
			str[i++] = *s1++;
		while (*s2)
			str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	char s1[]= "OI";
	char s2[]= " MUNDO!";
	
	char	*new;
	
	new = ft_strjoin(s1,s2);
	printf("%s  +  %s  =  %s",s1,s2,new);
}*/
