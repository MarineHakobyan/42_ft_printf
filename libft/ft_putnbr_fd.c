/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:54:24 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:54:26 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(long long n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i = 11;
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		write(fd, "147483648", 9);
	}
	else if (n < 0)
	{
		i += ft_putchar_fd('-', fd);
		n *= -1;
		i += ft_putnbr_fd(n, fd);
	}
	else if (n / 10)
	{
		i += ft_putnbr_fd(n / 10, fd);
		i += ft_putnbr_fd(n % 10, fd);
	}
	else		
		i += ft_putchar_fd(n + '0', fd);
	return (i);
}
