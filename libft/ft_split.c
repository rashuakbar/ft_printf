/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:03:46 by vimendes          #+#    #+#             */
/*   Updated: 2023/05/09 18:25:55 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc(len * sizeof(*s) + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
*/
static char	**splitting(char **list, char const *str, char set, size_t words)
{
	size_t	i;
	int		len;
	int		start;

	start = 0;
	i = 0;
	len = 0;
	if (!str || !list)
		return (NULL);
	while (*str && i < words)
	{
		while (str[start] == set)
			start++;
		while (str[start + len] != set && str[start + len] != '\0')
			len++;
		list[i] = ft_substr(str, start, len);
		str = str + (start + len);
		i++;
		len = 0;
		start = 0;
	}
	list[i] = NULL;
	return (list);
}

static size_t	count(char const *str, char set)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (*str)
	{
		while (*str == set && *str != '\0')
			str++;
		if (*str == '\0')
			break ;
		if (*str != set)
			i++;
		while (*str != set && *str != '\0')
			str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	words;

	words = count(s, c);
	list = malloc((words + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	splitting(list, s, c, words);
	return (list);
}
/*int	main(void)
{
	char **test;
	int	i;
	char	t;
	char	*s = "      split       this for   me  !       ";
	
	t = ' ';
	i = 0;
	printf("%i", (int)count(s,t));
	test = ft_split(s,t);
	while (test[i] != NULL)
	{
		printf("%s \n", test[i]);
		free(test[i]);
		i++;
	}
	free(test[i]);
	free(test);
	return (0);
}

   b ft_split.c:49
   b ft_split.c:32
   b ft_split.c:9
   
   display words
   
   display i
   display str
   
   display len
   display str
   display list[i]
   display i
   */
