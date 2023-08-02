/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:04:22 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/17 04:04:30 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*temp;
	size_t	i;

	temp = (char *)str;
	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == (unsigned char) c)
			return (temp + i);
		i++;
	}
	if (temp[i] == (unsigned char) c)
		return (temp + i);
	return (NULL);
}
/*int main () {
   const char str[] = "42 лучших";
   const char ch = 'л';
   char *ret;
   char *res;

   ret = strchr(str, ch);
   res = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
  printf("String after |%c| is - |%s|\n", ch, res);
   
   return(0);
}*/
