/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 09:38:24 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:05:45 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, WORLD! 123";

	char *ptr1 = ft_memchr(str, 'l', sizeof(str));
	if (ptr1)
		printf("Found 'l' at position: %ld\n", ptr1 - str);
	else
		printf("'l' not found\n");

	char *ptr2 = ft_memchr(str, 'x', sizeof(str));
        if (ptr2)
                printf("Found 'x' at position: %ld\n", ptr1 - str);
        else
                printf("'x' not found\n");
	return (0);
}*/
