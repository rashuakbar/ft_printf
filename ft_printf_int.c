#include "ft_printf.h"

int	ft_printf_int(int num)
{
/* fazer conversao de inteiro para str com ft_itoa*/
	char	*str;
	int	len;

	str = ft_itoa(num);
	if (!str)
		return (0);
	ft_putstr_fd(str,1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
