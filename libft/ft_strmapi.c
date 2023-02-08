/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:56:27 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:56:28 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = -1;
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (0);
	while (s[++i])
		ptr[i] = f(i, s[i]);
	ptr[i] = '\0';
	return (ptr);
}
