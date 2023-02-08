/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:53:08 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:53:09 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = -1;
	s = (char *)src;
	d = (char *)dst;
	if (d <= s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (len--)
		d[len] = s[len];
	}
	len = ft_strlen(d);
	d[len] = '\0';
	return (d);
}
