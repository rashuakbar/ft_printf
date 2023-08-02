/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:11:44 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/18 21:20:22 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = malloc (sizeof(*str) * (ft_strlen(str) + 1));
	if (!dup)
		return (0);
	while (str[i] != 0)
	{
		dup[i] = (char)str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int	main(void)
{
	char	*test;
	int	i = 0;
	char	c;
	const char	*srt = "Oi mundo";
	
	test = ft_strdup(srt);
	while (test[i]!= '\0')
	{
		c = test[i];
		write(1, &c, 1);
		i++;
	}
	//free (dup);
	return (0);
}*/
