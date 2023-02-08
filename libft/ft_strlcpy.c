/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:56:01 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:56:02 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = ft_strlen(src);
	if (dstsize <= 0)
		return (j);
	while (++i < dstsize - 1 && src[i] != '\0')
		dst[i] = src[i];
	dst[i] = '\0';
	return (j);
}
