/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:58:31 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 11:55:11 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*node1 = ft_lstnew("First");
	t_list  *node2 = ft_lstnew("Second");
	t_list  *node3 = ft_lstnew("Third");
	t_list	*last;

	node1->next = node2;
	node2->next = node3;

	last = ft_lstlast(node1);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("List is empty.\n");
}*/
