#include "ft_printf.h"

int	ft_printf_char(int c)
{
	ft_puchar_fd(c,1);
	return(1);
}
