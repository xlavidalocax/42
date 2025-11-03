/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:57:31 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/22 09:58:11 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
        unsigned char   *ptr;
        size_t                  i;

        ptr = (unsigned char *)s;
        i = 0;
        while (i < n)
        {
                ptr[i] = (unsigned char)c;
                i++;
        }
        return (s);
}

/*
#include <stdio.h>

int     main(void)
{
        char    b[20] = "Hello World!";
        ft_memset(b + 5,'2', 2);
        printf("%s\n", b);
        return (0);
}*/
