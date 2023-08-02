/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:09:27 by vimendes          #+#    #+#             */
/*   Updated: 2023/04/21 12:11:04 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	j;

	j = 0;
	while (s1[j] != '\0')
	{		
		if (check_set(s1[j], set) == 0)
			break ;
		j++;
	}
	i = ft_strlen(s1)-1;
	while (i >= j)
	{
		if (check_set(s1[i], set) == 0)
			break ;
		i--;
	}
	new = ft_substr(s1, (j), (++i - j));
	return (new);
}
/*int	main(void)
{
	char	s1[]="141545450ola125ola545552112";
	char	set[]="01254";
	char	*new;
	
	new = ft_strtrim(s1, set);
	printf ("\n%s", new);
	return (0);	
}*/
