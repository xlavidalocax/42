/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:27:31 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 11:30:51 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*#include <fcntl.h>
int main(void)
{
	ft_putendl_fd("Hello, world!", 1);
    	ft_putendl_fd("Error message", 2);
    	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    	if (fd == -1)
        	return (1);

    	ft_putendl_fd("Writing this line to a file.", fd);
    	ft_putendl_fd("Second line.", fd);
    	close(fd);
    	return (0);
}*/
