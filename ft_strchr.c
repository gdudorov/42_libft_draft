/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 19:08:47 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/29 20:03:05 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tab;

	tab = (char *)s;
	while (*tab)
	{
		if (*tab == (char)c)
			return (tab);
		tab++;
	}
	if (c)
		return (NULL);
	return (tab);
}

#ifdef TEST

int		main(void)
{
	printf("By    strchr the pointer is, %s\n", strchr("ABC0DF12345", 68));
	printf("By FT_strchr the pointer is, %s\n", ft_strchr("ABC0DF12345", 68));
	return (0);
}
#endif
