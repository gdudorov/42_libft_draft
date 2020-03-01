/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:17:55 by gdudorov          #+#    #+#             */
/*   Updated: 2020/02/26 17:25:07 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	tab = (char*)(malloc(sizeof(*tab) * (len + 1)));
	if (tab)
	{
		while (i <= len)
		{
			tab[i] = s1[i];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}

#ifdef TEST

int		main(void)
{
	char	*s1;
	char	*tab1;
	char	*tab2;

	s1 = "abc\200\201cba\202\0abc";
	tab1 = ft_strdup(s1);
	tab2 = strdup(s1);
	printf("ft_strdup is %s\n", tab1);
	printf("strdup is %s\n", tab2);
	free(tab1);
	free(tab2);
	return (0);
}
#endif
