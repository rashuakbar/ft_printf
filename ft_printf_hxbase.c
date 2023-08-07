#include "ft_printf.h"
#include "libft/libft.h"

int	count_d(unsigned int n)
{
	int	dgt;

	dgt = 0;
	while (n > 9)
	{
		dgt++;
		n / 10;
	}
	dgt = dgt + 2;
	return (dgt);
}
char	*ft_itoa_hx(unsigned int nb, char *base)
{
	char	*str;
	int		i;
	int		len;
	int		index;

	if (nb == 0)
		return (ft_strdup("0"));
	len = ft_strlen(base);
	i = count_d(nb);
	index = 0;
	str = malloc(sizeof(char) * i);
	if(!str)
		return (NULL);
	while (nb && index < i)
	{
		str[i-index] = base[nb % len];
		nb = nb / len;
		index++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_printf_hxbase(unsigned int num, char *base)
{
	char	*str;
	int	len;

	str = ft_itoa_hx(num, base);
	len = ft_strlen(str);
	ft_putstr_fd(str,1);
	free(str);
	return (len);	
}

int main(void)
{
	int i = 9;
	int c ;

	c = ft_printf_hxbase((unsigned int)i,"0123456789ABCDEF");
	ft_putchar_fd('\n',1);
	ft_putchar_fd('a',1);
	ft_putchar_fd('\n',1);
	ft_putstr_fd("0123456789ABCDEF\n",1);
	printf("\n %d", c);
	return (0);
}
