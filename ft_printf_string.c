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
/*int main ()
{
	char st[20] = "ola mundo!";
	int a = 0;

	printf("<%s>\n", st);
	a = ft_printf_string(st);
	printf("\n %d caracteres;\n",a);
	return (0);
}*/