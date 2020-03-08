/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 18:58:43 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/07 23:33:20 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*stab;
	unsigned char		*dtab;

	stab = src;
	dtab = dst;
	i = 0;
	if (len == 0)
		return (dst);
	if (dtab > stab)
	{
		while (len--)
			dtab[len] = stab[len];
	}
	else
	{
		while (i < len && (stab || dtab))
		{
			dtab[i] = stab[i];
			i++;
		}
	}
	return (dst);
}
