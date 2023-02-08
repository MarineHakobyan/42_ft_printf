/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:52:57 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:52:58 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*vp;
	char	*ptr;

	ptr = (char *)src;
	vp = dst;
	i = -1;
	while (++i < n)
		vp[i] = ptr[i];
	return (dst);
}
