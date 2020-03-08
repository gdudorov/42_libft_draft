/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:09:51 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/06 22:24:14 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = (*str - '0') + res * 10;
		str++;
	}
	return (res * sign);
}

#ifdef TEST

int		main(void)
{
	printf("******************** UNIT TEST********************\n");
	printf("1 atoi	    INT:  %d\n", atoi("2147483647"));
	printf("2 ft_atoi   INT:  %d\n", ft_atoi("2147483647"));
	printf("3 atoi	NEG INT: %d\n", atoi("-2147483647"));
	printf("4ft_atoiNEG INT: %d\n", ft_atoi("-2147483647"));
	printf("5atoi	OVERINT: %d\n", atoi("42949672946"));
	printf("6ft_atoiOVERINT: %d\n", ft_atoi("42949672946"));
	printf("7atoi	   LONG: %d\n", atoi("9223372036854775807"));
	printf("8ft_atoi   LONG: %d\n", ft_atoi("9223372036854775807"));
	printf("9atoi  NEG LONG:  %d\n", atoi("-9223372036854775807"));
	printf("10ft_atoiNEG LONG:  %d\n", ft_atoi("-9223372036854775807"));
	return (0);
}
#endif
