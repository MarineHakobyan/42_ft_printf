/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:55:50 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:55:55 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	c;

	c = ft_strlen(dst);
	j = 0;
	i = c;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	while (i < (dstsize - 1) && src[j] != '\0')
		dst[i++] = src[j++];
		dst[i] = '\0';
	return (i + ft_strlen(&src[j]));
}
