/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:50:02 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:04:06 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("ft_tolower('a') = %c\n", ft_tolower('a'));
    	printf("ft_tolower('z') = %c\n", ft_tolower('z'));
    	printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    	printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));
    	printf("ft_tolower('!') = %c\n", ft_tolower('!'));
    	return 0;
}*/
