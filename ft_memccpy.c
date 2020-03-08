/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 18:32:50 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/07 18:56:27 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*stab;
	unsigned char		*dtab;

	stab = src;
	dtab = dst;
	i = 0;
	while (i < n)
	{
		dtab[i] = stab[i];
		if (stab[i] == (unsigned char)c)
			return (dtab + i + 1);
		i++;
	}
	return (NULL);
}
