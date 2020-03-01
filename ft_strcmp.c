/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:30:41 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/25 22:46:18 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

#ifdef TEST

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "AC\200\2009\0";
	s2 = "AC\200\2009\200";
	printf("ft_strcmp is %d\n", ft_strcmp(s1, s2));
	printf("strcmp is %d\n", strcmp(s1, s2));
	return (0);
}
#endif
