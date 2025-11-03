/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:31:50 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:07:02 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

/*
#include <stdio.h>

int	main(void)
{
	char *tests[] = {
		"42",
		"   123",
		"-42",
		"+42",
		"0042",
		"  -00123",
		"2147483647",    
		"-2147483648",   
		"123abc",        
		"abc123",        
		"",
		"   +0",
		NULL
	};
	int i = 0;

	while (tests[i])
	{
		printf("Input: \"%s\"\n", tests[i]);
		printf("ft_atoi: %d\n", ft_atoi(tests[i]));
		i++;
	}
	return (0);
}*/
