/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 08:27:32 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/20 10:56:44 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int	*arr;
	size_t	n = 5;
	size_t	i;

	arr = (int *)ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("Testing ft_calloc zero_initialization:\n");
	for (i = 0; i < n; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);
	free(arr);
	return(0);
}*/
