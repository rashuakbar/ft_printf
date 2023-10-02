/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsgint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:17:11 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/02 10:24:42 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_unitoa(unsigned int nbr)
{
	/*adaptacao do itoa para unsigned int*/
	printf("%d", nbr);
}

int	ft_printf_unsgint(unsigned int num)
{
	/*converter com adaptação do itoa*/
	ft_unitoa(num);
	return (0);
}
int main ()
{
	int c, a = -2;
	unsigned int b = -2;

	c = printf("%u %u",a, b);
	printf("\n %d", c);
	return(0);

}
