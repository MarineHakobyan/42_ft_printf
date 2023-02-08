/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:56:44 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:56:46 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (n[j] == hay[i + j] && hay[i + j] != '\0' && i + j < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)&hay[i]);
			j++;
		}
		i++;
	}
	return (0);
}
