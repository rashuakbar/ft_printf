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
/*int main()
{
	int a = 0;
	int b = -2147483648;
	int c = 2147483647;
	int d = 123465;

	printf("\n <%d> ",ft_printf_int(a));
	printf("\n <%d> ", ft_printf_int(b));
	printf("\n <%d> ",ft_printf_int(c));
	printf("\n <%d> ", ft_printf_int(d));
	printf("\n");
	return (0);
}*/