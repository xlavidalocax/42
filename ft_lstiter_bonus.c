/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:26:32 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 12:52:31 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>

void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew("First");
	t_list *node2 = ft_lstnew("Second");
    	t_list *node3 = ft_lstnew("Third");

	node1->next = node2;
	node2->next = node3;

	printf("Testing ft_lstiter:\n");
	ft_lstiter(node1, print_content);
    	return (0);
}*/
