#include "libft.h"

int	ft_put_hex(unsigned long n, int type)
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
