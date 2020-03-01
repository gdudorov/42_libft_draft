/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:02:56 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/26 20:16:26 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#ifdef TEST

int		main(void)
{
	char	dst[50];
	char	src[50];

	printf("   strcpy stc is: %s\n", strcpy(src, "Privet World!!!\200\201"));
	printf("ft_strcpy dst is: %s\n", ft_strcpy(dst, src));
	return (0);
}
#endif
