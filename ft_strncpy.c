/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:18:16 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/28 00:07:35 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

#ifdef TEST

int		main(void)
{
	char	dst[50];
	char	dst1[50];
	int		len;
	int		i;

	i = 0;
	len = 34;
	printf("   strncpy dst1  is: %s\n", strncpy(dst1, "Privet", len));
	printf("ft_strncpy dst is: %s\n", ft_strncpy(dst, "Privet", len));
	while (i < len)
	{
		printf("%c", dst1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < len)
	{
		printf("%c", dst[i]);
		i++;
	}
	return (0);
}
#endif
