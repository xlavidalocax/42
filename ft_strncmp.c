/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:13:05 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/20 10:34:27 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>

int	main(void)
{
        int	res;

	res = ft_strncmp("hello", "hello", 5);
	printf("%d\n", res);
	res = ft_strncmp("hello", "heLlo", 5);
        printf("%d\n", res);
	res = ft_strncmp("abcdef", "abcxyz", 6);
        printf("%d\n", res);
        return (0);
}*/
