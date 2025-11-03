/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:36:38 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 11:39:21 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
}

/*#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	ft_putnbr_fd(-12345, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
    	write(1, "\n", 1);
	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    	if (fd < 0)
        	return (1);

    	ft_putnbr_fd(987654321, fd);
    	write(fd, "\n", 1);
    	ft_putnbr_fd(-42, fd);
    	write(fd, "\n", 1);

    	close(fd);
	return (0);
}*/
