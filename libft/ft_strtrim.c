/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:57:13 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:57:22 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const *trim, char c)
{
	int	i;

	i = -1;
	while (trim[++i])
	{
		if (trim[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_check(set, s1[start]) == 1)
		start++;
	if (start == (int)ft_strlen(s1))
	{
		s2 = malloc(sizeof(char) * 1);
		s2[0] = '\0';
		return (s2);
	}
	while (ft_check(set, s1[end]) == 1)
		end--;
	s2 = malloc(sizeof(char) * (end - start) + 2);
	while (start <= end)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
