/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amusakha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:54:37 by amusakha          #+#    #+#             */
/*   Updated: 2023/02/01 18:54:38 by amusakha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if(s == NULL)
	{
		write(1, "(null)", 6);
		return(6);
	}
	while (s[++i])
		write(fd, &s[i], 1);
	return (i);
}
