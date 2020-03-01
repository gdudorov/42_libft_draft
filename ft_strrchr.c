/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:07:17 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/29 21:52:56 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tab;
	size_t	len; 

	len = strlen(s);
	tab = (char *)s;
	while (tab[len - 1] >= 0)
		{
		if (tab[len - 1] == (char)c)
			return (tab + len - 1);
		len--;
	}
	if (c)
		return (NULL);
	return (tab +len - 1);
}

#ifdef TEST

int		main(void)
{
	printf("By    strRchr the pointer is, %s\n", strrchr("ABC05DF12345ABCDF77787", '5'));
	printf("By FT_strRchr the pointer is, %s\n", ft_strrchr("ABC0DF12\0 345ABCDF77787", '3'));
	return (0);
}
#endif
