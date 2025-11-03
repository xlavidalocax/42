/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:03:50 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:02:23 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}

/*
#include <stdio.h>

int   main(void)
{
        char buf1[20] = "HelloWorld";
        char buf2[20] = "1234567890";

        ft_memmove(buf1 + 5, buf2, 5);
        printf("non-overlap: %s\n", buf1);
        char s[] = "OverlapExample";
        ft_memmove(s + 5, s, 7);
        printf("overlap dest>src: %s\n", s);
        char t[] = "1234567890";
        ft_memmove(t, t + 3, 5);
        printf("overlap dest<src: %s\n", t);
        return (0);
}*/
