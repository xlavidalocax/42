/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 10:13:08 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 12:06:38 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char *big = "Hello 42 Barcelona!";
	const char *little1 = "42";
	const char *little2 = "world";
	const char *little3 = "";

	printf("Case 1: '42' in 'Hello 42 Barcelone!' (len=15)\n");
	printf("Result: %s\n\n", ft_strnstr(big, little1, 15));

	printf("Case 2: 'world' in 'Hello 42 Barcelona!' (len=15)\n");
	printf("Result: %s\n\n", ft_strnstr(big, little2, 15));

	printf("Case 3: Empty little string\n");
	printf("Result: %s\n\n", ft_strnstr(big, little3, 15));

	printf("Case 4: '42' in 'Hello 42 Barcelona!' but len=5\n");
	printf("Result: %s\n", ft_strnstr(big, little1, 5));

	return (0);
}*/
