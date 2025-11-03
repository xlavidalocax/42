/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:05:12 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 11:51:52 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	t_list node1, node2, node3;

       	node1.content = "First";
    	node1.next = &node2;

    	node2.content = "Second";
    	node2.next = &node3;

    	node3.content = "Third";
    	node3.next = NULL;

    	t_list *empty = NULL;
   	printf("Empty list size: %d\n", ft_lstsize(empty));
   	printf("One node size: %d\n", ft_lstsize(&node1));
}*/
