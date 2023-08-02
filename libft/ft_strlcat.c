/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 02:54:05 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/16 02:55:36 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;

	ld = ft_strlen(dest);
	i = 0;
	if (size <= ld)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && ((i + ld + 1) < size))
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ft_strlen(src));
}
/*int main()
{
    char src[] = "galinha";
    char dest[5] = "";

    printf("Antes:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    size_t i = ft_strlcat(dest, src, sizeof(dest));

    printf("\nDepois:\n");
    printf("dest: %s\n", dest);
    printf("Tamanho final: %zu\n", i);

    return 0;
}*/
