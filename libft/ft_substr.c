/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:57:33 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:57:34 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (start > ft_strlen(s) || len < 1)
	{
		sub = malloc(sizeof(char) * 1);
		if (!sub)
			return (0);
		sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	while (i < len && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
