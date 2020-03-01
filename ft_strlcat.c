/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:13:12 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/29 02:00:59 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		n;
	size_t	 dlen;
	size_t	i;
//	size_t	j;
	
	dlen = 0;
	n = dstsize; 
	while (n-- && dst[dlen])
		dlen++;
//	dlen = i - dstsize;
	n = dstsize - dlen;
	if (n == 0)
		return(dlen + strlen(src));
	i = 0;
	dlen++;
	while (src[i]) 
	{
		if (n != 1) 
		{
			dst[dlen] = src[i];
			dlen++;
			n--;
		}
		i++;
	}
	dst[i] = '\0';

	return(dlen + i);	
}

#ifdef TEST

	int		main(void)
{
	char	dst[100];
	char	src[100];
	size_t	size;

	size = 34; 
	strcpy(dst, "12345");
	strcpy(src, "67890");
	printf("   strlcat is %s %zu\n", dst, strlcat(dst, src, size));
	strcpy(dst, "12345");
	strcpy(src, "67890");
	printf("ft_strlcat is %s %zu\n", dst, ft_strlcat(dst, src, size));
	return (0);
}
#endif
