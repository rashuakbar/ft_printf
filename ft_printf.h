/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:13:45 by vimendes          #+#    #+#             */
/*   Updated: 2023/08/17 15:13:50 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_printf_char(int c);
int	ft_printf_int(int num);
int	ft_printf_string(char *src);
int	ft_printf_pnt(void *pointer);
int ft_printf_unsgint(unsigned int num);
int ft_printf_hxbase(unsigned int num,char *base);

#endif
