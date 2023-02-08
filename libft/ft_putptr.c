#include "libft.h"

int	ft_putptr(void *p)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	len += ft_put_hex((unsigned long)p, 0);
	return (len);
}