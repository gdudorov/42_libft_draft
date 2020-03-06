/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:48:05 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/06 14:26:42 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;

	if (!(*needle))
		return ((char *)haystack);
	k = -1;
	i = -1;
	while (haystack[++i] && i < (int)len)
	{
		j = i;
		while (needle[++k] && i < (int)len)
		{
			if (haystack[i++] != needle[k])
			{
				k = -1;
				i = j;
				break ;
			}
		}
		if (k != -1)
			break ;
	}
	return ((k < 0) || !(len) || (i >= (int)len) ? NULL : (char *)haystack + j);
}

#ifdef TEST

int		main(void)
{
	printf("By FT_strnstr, %s\n", ft_strnstr("MZMZIR", "MZIR", 15));
	printf("By    strnstr, %s\n", strnstr("MZMZIR", "MZIR", 15));
	return (0);
}
#endif
