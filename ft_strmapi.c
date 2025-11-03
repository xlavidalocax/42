/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:34:03 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 13:01:36 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len_s;
	char			*res;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len_s] = '\0';
	return (res);
}

/*#include <stdio.h>

char	my_func(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char *str = "HelloWorld42";
	char *res;
	res = ft_strmapi(str, my_func);
	if(res)
	{
		printf("Original: %s\n", str);
		printf("Mapped: %s\n", res);
		free(res);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}*/
