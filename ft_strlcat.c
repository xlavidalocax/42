/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:43:58 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:03:15 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(src);
	len_d = 0;
	while (dest[len_d] && len_d < size)
		len_d++;
	if (size == len_d)
	{
		return (size + len_s);
	}
	i = 0;
	while (src[i] && (len_d + i) < (size - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}

/*
#include <stdio.h>

int   main(void)
{
        char    dest1[20] = "Hello";

        size_t  res1 = ft_strlcat(dest1, "World", sizeof(dest1));
        printf("res:%zu | dest: '%s'\n", res1, dest1);
        return (0);
}*/
