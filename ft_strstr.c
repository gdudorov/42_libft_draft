/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 00:21:32 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/06 14:09:37 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;

	if (!(*needle))
		return ((char *)haystack);
	i = -1;
	k = -1;
	while (haystack[++i])
	{
		j = i;
		while (needle[++k])
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
	return ((k == -1) ? NULL : (char *)haystack + j);
}

#ifdef TEST

int		main(void)
{
	printf("By FT_strstr, %s\n", ft_strstr("MZIRIBMZPRIBMZPwww", "MZIRIBMZP"));
	printf("By    strstr, %s\n", strstr("MZIRIBMZPRIBMZPwww", "MZIRIBMZP"));
	return (0);
}
#endif
