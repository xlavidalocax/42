/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 07:43:20 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:01:10 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int     main(void)
{
        char    s[10] = "abcdefghi";
        ft_bzero(s + 2, 2);
        for (int i = 0; i < 10; i++)
        printf("%d ", (unsigned char)s[i]);
        return (0);
}*/
