/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:30:45 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 15:20:42 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*tab;
	
	if (size <= 0)
		return (NULL);
	i = -1;
	while (++i < size)
		tab[i] = '\0';
	return (tab);	
}
