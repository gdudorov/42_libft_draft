/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:39:37 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/28 00:24:40 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while ((size_t)j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

#ifdef TEST

int		main(void)
{
	char	s1[100];
	char	s2[100];

	strcpy(s1, "AB");
	strcpy(s2, "CDEFGHI");
	printf("   strcat is %s\n", strncat(s1, s2, 10));
	strcpy(s1, "IH");
	strcpy(s2, "GFEDCBA");
	printf("ft_strcat is %s\n", ft_strncat(s1, s2, 10));
	return (0);
}
#endif
