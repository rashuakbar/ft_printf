/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendes <vimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:13:45 by vimendes          #+#    #+#             */
/*   Updated: 2023/10/04 12:24:44 by vimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_printf_char(int c);
int		ft_printf_int(int num);
int		ft_printf_string(char *src);
int		ft_printf_pnt(void *pointer);
int		ft_printf_unsgint(unsigned int num);
int		ft_printf_hxbase(unsigned int num, char *base);
int		count_dhx(unsigned int n);
int		count_dp(unsigned long n);
int		count_du(long int n);
char	*ft_itoa_hx(unsigned int nb, char *base);
char	*ft_hxtoa_long(unsigned long nb, char *base);
char	*ft_unitoa(unsigned int nbr);

#endif
