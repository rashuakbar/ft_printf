/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pnt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:14:26 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/02 10:24:33 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_pnt(void *pointer)
{
	/*imprimir o endereçao em hexadecimal*/
	char *pnt; 

	pnt = (char *) pointer;
	printf("%s", pnt);
	return (0);
}
