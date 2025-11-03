/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 10:54:08 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/17 13:01:01 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		len;
	long	tmp;

	if (n == 0)
		return (1);
	len = 0;
	tmp = n;
	if (tmp < 0)
	{
		len++;
		tmp = -tmp;
	}
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_setup(int n, int *len)
{
	char	*str;

	*len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) *(*len + 1));
	if (!str)
		return (NULL);
	str[*len] = '\0';
	return (str);
}

static void	ft_handle_sign(long *num, char *str)
{
	if (*num < 0)
	{
		str[0] = '-';
		*num = -(*num);
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	long		num;
	int			len;

	num = n;
	str = ft_itoa_setup(n, &len);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	ft_handle_sign(&num, str);
	while (num)
	{
		str[--len] = (char)(num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	int numbers[] = {0, 42, -42, 2147483647, -2147483648};
    	size_t i;
    	char *str;

    	for (i = 0; i < 5; i++)
    	{
        	str = ft_itoa(numbers[i]);
        	if (!str)
            		return 1;
        	printf("ft_itoa(%d) = \"%s\"\n", numbers[i], str);
        	free(str);
    	}
    	return 0;
}*/
