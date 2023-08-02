/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:40:14 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/17 04:40:44 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0') && (str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	if (i >= n)
		i--;
	return (((unsigned char) str1[i]) - ((unsigned char) str2[i]));
}
/*int main () {
   char str1[15] = "OLA";
   char str2[15] = "OLAHO";
   int ret;
   int res;

   ret = strncmp(str1, str2, 3);
   res = ft_strncmp(str1, str2, 3);

   if(ret < 0) 
   {
      printf("str1 is less than str2");
   }
   else if(ret > 0) {
      printf("str1 is greater than str2");
   }
   else 
   {
      printf("str1 is equal to str2");
   }
   printf ("\n Resultado da ft_strncmp");
   if(res < 0)
   {
      printf("\nstr1 is less than str2");
   }
   else if(res > 0) 
   {
      printf("\nstr1 is greater than str2");
   } else 
   {
      printf("\nstr1 is equal to str2");
   }
   
   return(0);
}*/
