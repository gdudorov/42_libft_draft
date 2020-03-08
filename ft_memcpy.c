/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 17:55:14 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/07 18:27:37 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*stab;
	unsigned char		*dtab;

	stab = src;
	dtab = dst;
	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		dtab[i] = stab[i];
		i++;
	}
	return (dst);
}
