/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:15:40 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:02:49 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_s;

	len_s = 0;
	while (src[len_s])
	{
		len_s++;
	}
	if (size == 0)
	{
		return (len_s);
	}
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_s);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[10];

	size_t	res = ft_strlcpy(dest, "hello", sizeof(dest));
	printf("Copied string: '%s'\n", dest);
	printf("Return value: %zu\n", res);

	res = ft_strlcpy(dest, "worldwideweb", 5);
        printf("Copied string(size=5): '%s'\n", dest);
        printf("Return value: %zu\n", res);
        return (0);
}*/
