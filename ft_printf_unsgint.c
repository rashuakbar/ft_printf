#include "ft_printf.h"

void ft_unitoa(unsigned int nbr)
{
	/*adaptacao do itoa para unsigned int*/
	printf("%d", nbr);
}

int	ft_printf_unsgint(unsigned int num)
{
	/*converter com adaptação do itoa*/
	ft_unitoa(num);
	return (0);
}
int main ()
{
	int c, a = -2;
	unsigned int b = -2;

	c = printf("%u %u",a, b);
	printf("\n %d", c);
	return(0);

}