#include "ft_printf.h"

int	ft_printf_string(char * src)
{
	int	len;

	if (!src)
	{
		write(1,"(null)",6);
		return (6);
	}
	len = ft_strlen(src);
	ft_putstr_fd(src,1);
	return (len);	
}
