#include "ft_printf.h"

int ft_printf_pnt(void *pointer)
{
	/*imprimir o endereçao em hexadecimal*/
	char *pnt; 

	pnt = (char *) pointer;
	printf("%s", pnt);
	return (0);
}