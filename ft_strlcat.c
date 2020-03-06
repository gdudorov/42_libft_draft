/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:13:12 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/04 17:05:46 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;
	int	len_s;
	int len_d;

	i = 0;
	j = 0;
	len_s = 0;
	while (dst[i])
		i++;
	len_d = i;
	while (src[len_s])
		len_s++;
	while (src[j] && ((int)dstsize - i - 1) > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (len_d + len_s <= len_s + (int)dstsize)
		return (len_d + len_s);
	return (len_s + dstsize);
}

#ifdef TEST

int		main(void)
{
	char	dst[100];
	char	src[100];
	size_t	size;

	size = 100;
	strcpy(dst, "11");
	strcpy(src, "there is no stars in the sky");
	printf("   strlcat is %s %zu\n", dst, strlcat(dst, src, size));
	strcpy(dst, "11");
	strcpy(src, "there is no stars in the sky");
	printf("ft_strlcat is %s %zu\n", dst, ft_strlcat(dst, src, size));
	return (0);
}
#endif
