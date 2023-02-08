/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:56:59 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:57:00 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0 && s[i] == 0)
		return ((char *)(s + i));
	while (i-- >= 0)
	{
		if ((char)c == s[i])
			return ((char *)(s + i));
	}
	return (0);
}
