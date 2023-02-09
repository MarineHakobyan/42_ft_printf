#include "ft_printf.h"

int	ft_putitoa_base(unsigned int nbr, char *base)
{
	int len;

	len = 0;
	if (nbr / 16 != 0)
		len += ft_putitoa_base(nbr / 16, base);
	if (nbr % 16 != 16)
		len += ft_putchar_fd(base[nbr % 16], 1);
	return len;
}

int	ft_put_hex(unsigned int n, int type)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_put_hex(n / 16, type);
	n = n % 16;
	if (n < 10)
		len += ft_putchar_fd(n + 48, 1);
	else if (n >= 10 && type == 0)
		len += ft_putchar_fd(n + 87, 1);
	else if (n >= 10 && type == 1)
		len += ft_putchar_fd(n + 55, 1);
	return (len);
}

int	ft_putptr_fd(void *p)
{
	int	len;
	int	number;

	len = 0;
	number = (unsigned int)p;
	// if (number < 0)
	// {
	// 	len += write(fd, "-", 1);
	// 	number *= -1;
	// }
	len += ft_putstr_fd("0x", 1);
	len += ft_putitoa_base((unsigned int)p, "0123456789abcdef");
	return (len);
}

int base_choose(unsigned int nbr, char c)
{
	if (c == 'x')
		return (ft_putitoa_base(nbr, "0123456789abcdef"));
	return (ft_putitoa_base(nbr, "0123456789ABCDEF"));
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
	else if (type == 'u')
		len += ft_putnbr_fd(va_arg(args, unsigned int), 1); //long long?
	else if (type == 'x' || type == 'X')
		len += base_choose(va_arg(args, unsigned int), type);
	else if (type == 'p')
		len += ft_putptr_fd(va_arg(args, void*));
	else if (type == '%')
		len += ft_putchar_fd('%', 1);
	else
		len += ft_putchar_fd(type, 1);
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
		++i;
	}
	va_end(args);
	return (len);
}
