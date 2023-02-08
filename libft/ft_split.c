/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:54:45 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:54:46 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		len;
	char	**ptr;

	i = -1;
	count = 0;
	while (s[++i])
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
	ptr = malloc(sizeof(char *) * count + 1);
	if (!s || !ptr)
		return (0);
	ptr[count] = 0;
	while (--i >= 0)
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				++len;
			ptr[--count] = ft_substr(s, i, len);
		}
	}
	return (ptr);
}
