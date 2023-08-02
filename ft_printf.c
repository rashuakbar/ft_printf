#include "ft_printf.h"

int	check_op(char *string, int *op, va_list args)
{
	/*check das opções*/
}

int	ft_printf(const char *input, ...)
{
	int	cont;
	int	i;
	char *stg;
	va_list args;

	stg = (char *)input;
	cont = 0;
	i = 0;
	va_start(args,input);
	while(stg[i])
	{
		if (stg[i] == "%")
			cont += check_op(stg, &i, args);
		else
			{
				ft_putchar_fd(stg[i],1);
				cont++;
			}
		i++;
	}
	va_end(args);
	return (cont);
}
