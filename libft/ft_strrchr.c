/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:26:02 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/17 04:27:06 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*temp;
	int				i;
	int				occ;

	i = 0;
	occ = -1;
	temp = (unsigned char *) str;
	while (temp[i] != '\0')
	{
		if (temp[i] == (unsigned char) c)
			occ = i;
		i++;
	}
	if (temp[i] == (unsigned char) c)
		occ = i;
	if (occ == -1)
		return (NULL);
	return ((char *)temp + occ);
}
/*int main () {
   int len;
   const char str[] = "hj è dia de ècole";
   char ch = 'É';
   char *ret;
   char *res;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   res = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, res);
   
   return(0);
}*/
