/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 23:39:48 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/07 23:53:10 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*stab;

	stab = s;
	i = 0;
	while (i < n)
	{
		if (stab[i] == (unsigned char)c)
			return (unsigned char *)(stab + i);
		i++;
	}
	return (NULL);
}
