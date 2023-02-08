/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:52:29 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:52:34 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*vp;

	vp = (char *)s;
	i = -1;
	while (++i < n)
	{
		if ((char)c == vp[i])
			return (&vp[i]);
	}
	if ((char)c == 0 && vp[i] == 0 && n != 0)
		return (&vp[i]);
	return (0);
}
