#include "ft_printf.h"

int	ft_itoa_base(int nbr, char *base)
{
	static int	i;
	int len;

	len = 1;
	
	i = -1;
	if (nbr / 16 != 0)
		len += ft_itoa_base(nbr / 16, base);
	if (nbr % 16 != 16)
		ft_putchar_fd(base[nbr % 16], 1);
	return len;
}

int base_choose(int nbr, char c)
{
	if(c == 'x')
		return (ft_itoa_base(nbr, "0123456789abcdef"));
	return (ft_itoa_base(nbr, "0123456789ABCDEF"));
}

int ft_type(va_list args, const char type)
{
	int len;

	len = 0;
	if (type == 'c')
		len += ft_putchar_fd((char)va_arg(args, int), 1);
	else if (type == 's')
		len += ft_putstr_fd(va_arg(args, char *), 1);
	else if (type == 'd' || type == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (type == '%')
		len += ft_putchar_fd('%', 1);
	else if (type == 'u')
		len += ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (type == 'x' || type == 'X')
		len += base_choose(va_arg(args, unsigned int), type);
	return (len);
}

int	ft_printf(const char *print, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, print);
	i = 0;
	len = 0;
	while(print[i])
	{
		if(print[i] == '%')
			len += ft_type(args, print[++i]);
		else
			len += ft_putchar_fd(print[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
