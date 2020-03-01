/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:31:11 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/27 20:32:36 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
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

	strcpy(s1, "Privet\200\201");
	strcpy(s2, "POKA");
	printf("   strcat is %s\n", strcat(s1, s2));
	strcpy(s1, "Privet\200\201");
	strcpy(s2, "POKA");
	printf("ft_strcat is %s\n", ft_strcat(s1, s2));
	return (0);
}
#endif
