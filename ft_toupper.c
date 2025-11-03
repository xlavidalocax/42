/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:20:10 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:03:44 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    	printf("ft_toupper('z') = %c\n", ft_toupper('z'));
    	printf("ft_toupper('A') = %c\n", ft_toupper('A'));
    	printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
    	printf("ft_toupper('!') = %c\n", ft_toupper('!'));
    	return 0;
}*/
