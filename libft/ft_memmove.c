/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:59:45 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/16 01:27:41 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (((unsigned char *) dest) == ((unsigned char *) src))
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *) dest)[n - 1] = ((unsigned char *) src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}
/*int	main()
{
	char	s[] = "OLaWorld";
	char	d[20];
	char	d1[20];
	
	ft_memmove(d,s,8);
	memmove(d1,s,8);
	printf("%s || %s", d, d1);
	return (0);
}*/
