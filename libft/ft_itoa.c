/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:50:16 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:50:17 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(int n, char *ptr)
{
	if (n == 0)
	{
		ptr[0] = '0';
		return (1);
	}
	return (0);
}

int	ft_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_length(n);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (0);
	ft_check(n, ptr);
	ptr[len] = '\0';
	if (n == -2147483648)
	{
		ptr[1] = '2';
		n = -147483648;
	}
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		ptr[--len] = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}
