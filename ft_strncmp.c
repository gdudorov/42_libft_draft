/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:40:20 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/25 22:23:53 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

#ifdef TEST

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "A\200\200";
	s2 = "A\200\000";
	n = 3;
	printf("ft_strncmp is %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp is %d\n", strncmp(s1, s2, n));
	return (0);
}
#endif
