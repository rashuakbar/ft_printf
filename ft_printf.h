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
