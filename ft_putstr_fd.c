/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:39:18 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 11:24:58 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	write (fd, s, len);
}

/*int	main(void)
{
	ft_putstr_fd("Hello, world!\n", STDOUT_FILENO);
	ft_putstr_fd("", STDOUT_FILENO);
	ft_putstr_fd("Error message to stderr\n", STDERR_FILENO);
	ft_putstr_fd("Line with newline\n", STDOUT_FILENO);
	return (0);
}*/
